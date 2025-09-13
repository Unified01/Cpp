#include <iostream>
using namespace std;
int main() {
//printing factors 

int n;
cout << "enter n: ";
cin>> n;

cout << " factors of "<< n << " are: ";
for (int i=1; i<=n; i++){

    if (n%i==0) cout<<i<<" ";
  
}

// printing even numbers
// for ( int i=2; i<=100; i+=2) { cout<< i; }

// for(int i=1; i<=5; i++) { cout<< "hello world"; }



}