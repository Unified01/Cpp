#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=sqrt(n); i++){

        if(n%i==0){ cout<<i<<" ";        //nested

        if((n/i)!=i) cout<<(n/i)<<" ";}
    }
} 
