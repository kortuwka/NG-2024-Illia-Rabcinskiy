#include <iostream>
using namespace std;

int main(){
    int zp;
    cin >> zp;
    if (zp < 1000){
        cout << endl << "Work harder!";

    }
    if (zp > 999999){
        cout << "Yes, you are a millionaire!";
    }
    if (zp > 999){
            if(zp < 1000000){
                cout << "You work well";
            }
    }
    return 0;
}
