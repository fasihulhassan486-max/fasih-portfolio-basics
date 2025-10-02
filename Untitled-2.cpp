#include <iostream>
using namespace std;
int main() {
    int n = 5; 
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
        //fghjkl
    }
 return 0;
}