#include<iostream>
using namespace std;
int main(){

int x = 12;
int* ptr = &x; //ptr is just a variable stores address of datatype
cout<<x<<endl; 
*ptr = 15;  //updated the value of variable x using dereference operator, x=15.
cout<<x<<endl;





}