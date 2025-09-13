#include<iostream>
using namespace std;
int main(){
    string str; //string -> kinda charecter array.
    cout<<"Enter a string: ";
    getline(cin,str);  //didnt used cin as it ignores
    cout<<str;      //words after a space.
}