#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Insert value of n to display countdown from n to 1: " << endl;
    cin >> n; cout << endl;

    while(n >= 1){
        cout << n << endl;
        if(n % 5 == 0){
            cout << "Beep" << endl;
        }
        n--;
    }
    return 0;
}