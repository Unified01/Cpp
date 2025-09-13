#include <iostream>
using namespace std;

int main() {

// char ch;
// cin>> ch;
// int x = (int)ch; //typecasting charecter into integer
// cout << x ; 

//   typecasting integer into charecter

// int x; 
// cout << "enter an integer: ";
// cin >> x;  
// char ch = (char)x; //typecasting integer into charecter
// cout << ch; //printing the charecter

int sp, cp;

cout << "enter selling price: ";
cin >> sp;
cout << "enter cost price: ";
cin >> cp;

if (sp>cp)
{
        cout << "profit amount is: " <<sp-cp<< endl;
}

else if (sp<cp){
        cout << "loss amount is: " <<cp-sp<< endl;
}

else{
        cout << "no profit and no loss" << endl;

}


}