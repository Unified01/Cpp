#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of sides: ";
cin>>n;

for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=n; j++){ //coloumns
        cout<<(char)(j+64)<<" ";
    }
        cout<<endl;
}



}