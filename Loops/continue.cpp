#include<iostream>
using namespace std;
int main(){

// for(int i=1; i<=20; i++){
//     if(i==2 or i==10) continue; //continue is used to skip round
//     cout<< i << " ";
// }
 //printing odd numbers

for(int i=1; i<=100; i++){
     if(i%2==0) continue; //skips even numbers
     cout << i << " ";
}
    

}