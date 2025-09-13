#include<iostream>
using namespace std;
int main(){

int n;
cout<< "enter a number: ";
cin>>n;

int ld;
int r=0;

while(n!=0){
  ld = n%10;  
  r *= 10; //algo- multiply by 10 (starts from 0) and add last digit.
  r += ld;
  n /= 10;
}
  cout<< r;
}