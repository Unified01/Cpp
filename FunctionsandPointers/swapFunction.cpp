#include<iostream>
using namespace std;

void swap(int x, int y){ //pass by value,here x & y is a diff variable hence this doesnt swap.
    int temp = x;
    x = y;
    y = temp; 
}
int main(){

int x = 12;
int y = 45;
cout<<x<<" "<<y<<endl;
swap(x,y);
cout<<x<<" "<<y<<endl;



}