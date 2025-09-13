#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter side of squares: ";
cin>>n;

for(int i=1; i<=n; i++){ //rows

    for(int j=1; j<=n; j++){  //col
        cout<<j<<" ";
    }

    cout<<endl;
}


}