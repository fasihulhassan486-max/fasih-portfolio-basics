#include <iostream>
using namespace std;
int main(){
 int num, i, factorial = 1;
 cout << "Enter a number: ";
 cin >> num;
 for (i = 1; i <= num; i++) {
 factorial *= i;
 }
 cout << "Factorial of " << num << " is: " << factorial;
}