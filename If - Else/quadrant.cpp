#include <iostream>
using namespace std;
int main () {

int x,y;
cout << "enter x coordinate: ";
cin >> x;
cout << "enter y coordinate: ";
cin >> y;
if (x>0 && y>0) {
    cout << "point is in first quadrant" << endl;
} else if (x<0 && y>0) {
    cout << "point is in second quadrant" << endl;
} else if (x<0 && y<0) {
    cout << "point is in third quadrant" << endl;
} else if (x>0 && y<0) {
    cout << "point is in fourth quadrant" << endl;
} else if (x==0 && y==0) {
    cout << "point is at origin" << endl;
} else if (x==0) {
    cout << "point is on y axis" << endl;
} else if (y==0) {
    cout << "point is on x axis" << endl;




}