#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){

int arr[] = {1,6,7,34,9,23,2,8,3,6,11};
int mn = INT_MAX; 
int n = sizeof(arr)/4;

for(int i=0; i<n; i++){
    mn = min(mn,arr[i]);
    // if(arr[i]>mn) mn = arr[i];
}
    cout<<mn;
}