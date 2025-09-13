#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of rows: ";
cin>>n;
int mid = n/2 + 1;

for(int i=1; i<=n; i++){  //this StarPlus is only for odd number.

    for(int j=1; j<=n; j++){ 
        if(i==mid || j==mid) cout<<"* ";

        else cout<<"  ";
    }
        cout<<endl;
}



}