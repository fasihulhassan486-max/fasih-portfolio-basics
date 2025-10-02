#include <iostream>
using namespace std;
int main(){
 int num, original, remainder, result = 0;
 cout << "Enter a number: ";
 cin >> num;
 original = num;
 while (num != 0) {
 remainder = num % 10;
 result = result + (remainder * remainder * remainder);
 num /= 10;
 }
 if (original == result) {
 cout << original << " is an Armstrong number";
 } else {
 cout << original << " is not an Armstrong number";
 }
}