#include<iostream>
using namespace std;

int main() {
    
    int num;
    
    while (true) { //true is used when we dont know when it will terminate.

        cout << "Enter a number (-1 to exit): ";
        cin >> num;

        if (num == -1) {
            cout << "Exiting the loop." << endl;
            break; // Exit the loop when the user enters -1
        }
        else 
        cout << "You entered: " << num << endl;
      
    }

}