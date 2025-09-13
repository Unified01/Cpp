#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number to check composite or not: ";
    cin >> n;
        bool flag = false; // assume not composite

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = true; // composite  
                break;
            }
        }

        if (flag==true)
            cout << "Composite";
        else
            cout << "Not composite";
    }

  
    




