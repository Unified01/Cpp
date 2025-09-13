#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter n: ";
cin>>n;
if (n < 0) {
    cout << "n must be non-negative." << endl;
    }
int r;
cout<<"Enter r: ";
cin>>r;
if (r < 0 || r > n) {
    cout << "r must be non-negative and less than or equal to n." << endl;
        }

int a = 1; //a = n
for(int i=1; i<=n; i++){
    a *= i;
} 
int b = 1; //b = r
for(int i=1; i<=r; i++){
    b *= i;
}
int c = 1; //c = n-r
for(int i=1; i<=n-r; i++){
    c *= i;
}
        cout<<a/(b*c);

}