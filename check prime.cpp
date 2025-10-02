#include<iostream>
using namespace std:
void main(){
int i,num;
cout<<"Enter a number:";
cin>>num;
for(i=2;i<num;i++){
if(num%i==0){
cout<<"Number is not prime";
break;
}
}
if(i==num || num==1 || num==2)
cout<<"Prime Number";
}