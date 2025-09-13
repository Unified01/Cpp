#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){ // Fill the array with squares of natural numbers
        arr[i-1] = i*i;
    }
    for(int i=0; i<n; i++){ // Print the array elements
        cout<<arr[i]<<" ";
    }
}