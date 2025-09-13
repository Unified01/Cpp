#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter number of sides: ";
cin>>n;

for(int i=1; i<=n; i++){  //row & coloumn num is same

    for(int j=1; j<=i; j++){ 
        cout<<(char)(j+64);
    }
    cout<<endl;
}






}