#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        if(i%2!=0) arr[i] *= 2; //changed odd indices to multiple of 2
        else arr[i] += 10; //incremented even indices to a value by 10
        cout<<arr[i]<<" "; //printed new array
    }
    
}