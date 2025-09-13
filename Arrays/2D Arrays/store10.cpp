#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0; i<5; i++){ //row
        for(int j=0; j<5; j++){ //col
            arr[i][j] = 10;
        }
    }
    for(int i=0; i<5; i++){ //printing the stored element
        for(int j=0; j<5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}