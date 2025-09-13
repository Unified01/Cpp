#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
int x = 12;
int y = 45;

cout<<x<<" "<<y<<endl;
swap(&x, &y);    //adress of x and y are sent to swap function and variable got updated.
cout<<x<<" "<<y<<endl; // pass by reference.



}