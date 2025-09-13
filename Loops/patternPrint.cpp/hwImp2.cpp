// 1
// 13   ->(odd number triangle)  
// 135
// 1357
//
//print the above pattern!

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number of rows: ";
cin>>n;
//method 1

for(int i=1; i<=n; i++){
    int a = 1;
    for(int j=1; j<=i; j++){
        cout<<a<<" ";
        a += 2;

    }
    cout<<endl;
}

//method 2

for(int i=1; i<=n; i++){
    
    for(int j=1; j<=i; j++){
        cout<<j*2-1<<" ";
    }
    cout<<endl;
}

}