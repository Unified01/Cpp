#include <iostream>
using namespace std;

int main(){

int n;
cout << "enter n: ";                                             
cin>>n;
bool flag = 0; //assuming prime number

for(int i=2; i<=n/2; i++){
    if(n%i==0){
        flag = 1; 
        break;
    }
    
    }

    if(flag==1) cout<<"Not prime";
    else cout<<"Prime";












}