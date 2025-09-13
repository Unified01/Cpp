#include <iostream>
using namespace std;    
int main() {
    
int a, b, c;
cout << "enter the first number: ";
cin >> a;
cout << "enter the second number: ";
cin >> b;       
cout << "enter the third number: ";
cin >> c;   

if (a>b) {
    if (a>c) 
    cout << a << " is the greatest number" << endl;
    
    else 
    cout << c << " is the greatest number" << endl;
}


else {  // b>a
    if (b>c)  
    cout << b << " is the greatest number" << endl;

    else
    cout << c << " is the greatest number" << endl;
}








}