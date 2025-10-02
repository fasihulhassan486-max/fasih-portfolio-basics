const express = require("express");
const cors = require("cors");
const { MongoClient } = require("mongodb");

const app = express();
app.use(cors());
app.use(express.json());

const uri = "mongodb://127.0.0.1:27017"; // local MongoDB
const client = new MongoClient(uri);

async function run() {
  try {
    await client.connect();
    const db = client.db("final_project"); // database name
    const usersCollection = db.collection("users");

    // Register route
    app.post("/register", async (req, res) => {
      const { username, password } = req.body;
      const existingUser = await usersCollection.findOne({ username });

      if (existingUser) {
        return res.status(400).json({ message: "User already exists" });
      }

      await usersCollection.insertOne({ username, password });
      res.json({ message: "User registered successfully ✅" });
    });

    // Login route
    app.post("/login", async (req, res) => {
      const { username, password } = req.body;
      const user = await usersCollection.findOne({ username, password });

      if (user) {
        res.json({ message: "Login successful ✅" });
      } else {
        res.status(401).json({ message: "Invalid credentials ❌" });
      }
    });

    app.listen(5000, () => {
      console.log("🚀 Server running at http://localhost:5000");
    });
  } catch (err) {
    console.error(err);
  }
}

run();
