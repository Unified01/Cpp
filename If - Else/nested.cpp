#include <iostream>
using namespace std;
int main () {

int ram, shyam, ajay;
cout << "enter the age of ram: ";
cin >> ram;
cout << "enter the age of shyam: ";
cin >> shyam;
cout << "enter the age of ajay: ";
cin >> ajay;

// determining the youngest person among three persons using nested if-else statement

if (ram<shyam){
    if (ram<ajay) {
        cout << "ram is the youngest person"<<endl;
    }

    else {
        cout << "ajay is the youngest person"<<endl;
    }
}

else { //shyam<ram
     if (shyam<ajay){
        cout << "shyam is the youngest person"<<endl;
     }

        else {
            cout << "ajay is the youngest person"<<endl;
        }
}

}