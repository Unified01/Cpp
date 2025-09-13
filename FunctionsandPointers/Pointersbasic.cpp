#include<iostream>
using namespace std;

int main(){

int x = 3;
int* p = &x;  // &x is adress of variable x, p is a variable used to store it and int* is 
cout<<&x<<endl; //    datatype to store int type adress.
cout<<p<<endl;
cout<<*p<<endl; //dereference operator, used to fetch value from the adress.
cout<<x<<endl;
cout<<&p<<endl;

}