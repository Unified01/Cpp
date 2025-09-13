#include<iostream>
using namespace std;
int main(){
    string s = "Sagnik";
    s.push_back('i');  //adds char from back
    cout<<s<<endl;
    s.pop_back();  //removes the last char
    cout<<s<<endl;
    s.append(" ghosh"); //adds a string in back
    cout<<s<<endl;
    s.clear();      // empties the whole string
    cout<<s.length()<<s;
}