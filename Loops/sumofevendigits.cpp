#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;

int sum = 0;

while(n!=0){
    int ld = n%10;

    if(ld%2==0){
        sum += ld;}
        n /= 10;
}
 cout<<"sum of the even numbers is: "<<sum;





}