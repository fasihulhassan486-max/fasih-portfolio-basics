#include <iostream>
using namespace std;
int main(){
int a,b;
 cout<<"Enter first number:";
 cin>>a;
 cout<<"Enter second number:";
 cin>>b;
 cout<<"Before Swapping a = " <<a<<"and b = "<<b<<endl;
 b = a+b;
 a = b-a;
 b = b-a;
 cout<<"After swapping a = "<<a<<"and b = "<<b<<endl;
}