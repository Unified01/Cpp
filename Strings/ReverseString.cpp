#include<iostream>
#include<string>
#include<algorithm> //use this to use reverse function
using namespace std;
int main(){
    string s = "Sagnik";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(),s.end()); //or use two pointers i and j
    cout<<s;
}