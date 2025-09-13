// #include<iostream>
// using namespace std;

// void sum(int a, int b){
//     cout<<a+b;
//     return;
// }

// int main(){           //pass by value
//     sum(7,90);
// }

#include<iostream>
using namespace std;

int sum(int a, int b){
   return a+b;
}
int main(){           
    cout<<sum(7,90);
}

