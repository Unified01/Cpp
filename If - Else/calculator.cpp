#include <iostream>
using namespace std;
int main() { 
 float n1 , n2;
 char op;
    cin>>n1;
    cin>>op;
    cin>>n2;

        if (op=='+') {
         cout << n1+n2 << endl;}

        else if (op=='-'){
            cout << n1-n2 << endl;
        }

        else if (op=='*'){
            cout << n1*n2 << endl;
        }
        
        else if (op=='/'){
            cout << n1/n2 << endl;
        }



}