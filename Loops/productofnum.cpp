#include<iostream>
using namespace std;
int main(){
 
int n;
cout<<"enter a number: ";
cin>>n;
int product=1;
int ld;

while(n!=0){
    ld = n%10;  //given that there are no zeroes.
    product *= ld;
    n /= 10;

}
    cout<<product;

// int n;
// cin>> n;

// int ld;
// int product=1;
// while(n!=0){
//     ld = n%10;
//     product *= ld;
//     n /= 10;
// }
//  cout<<product;



}