#include<iostream>
#include<climits>
using namespace std;
int main(){

int arr[] ={12,64,9,23,2,8,3,6,11,7,3};
int mx = INT_MIN; 
int n = sizeof(arr)/4;

for(int i=0; i<n; i++){
    mx = max(mx,arr[i]);
    // if(arr[i]>mx) mx = arr[i];
}
    cout<<mx;
}







