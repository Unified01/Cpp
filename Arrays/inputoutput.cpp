#include<iostream>
using namespace std;
int main(){

int arr[5];
for(int i=0; i<=4; i++){
    cin>>arr[i];
}
cout<<endl;
for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
arr[0] = 23;    //updated the 0th index element.
for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}


}