#include<iostream>
using namespace std;

void usa(){  //void, int, char, bool, float are return-type.
    cout<<"you are in usa"<<"\n";
    return;

}
void india(){ //usa and india are name of the functions.
    cout<<"you are in india"<<"\n";
    return;
}
int main(){

    usa(); //function call
    cout<<"hey"<<"\n";
    india();
    
}