#include<iostream>
using namespace std;
void change(int arr[]){  //pass by reference. same dabbe rehte hai in case of array.
    arr[0] = 50;
}
int main(){

int arr[3] = {1,2,3};
for(int i=0; i<=2; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
change(arr);

for(int i=0; i<=2; i++){
    cout<<arr[i]<<" ";
}


}