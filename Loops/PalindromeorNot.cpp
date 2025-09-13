#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int revnum = 0;
    int temp = n;
    while(n!=0){
        int ld = n%10;
        revnum *= 10;
        revnum += ld;
        n /= 10;
    }
    if(temp==revnum) cout<<"Palindrome";
    else cout<<"Not a palindrome";
}