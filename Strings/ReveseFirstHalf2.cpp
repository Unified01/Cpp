#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Sagnik";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(), s.begin()+n/2);
    cout<<s<<endl;
}