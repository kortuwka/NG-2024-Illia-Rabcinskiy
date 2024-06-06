#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    int zp;
    setlocale(LC_ALL, "Ukrainian");
    cin >> zp;
    if (zp < 1000){
        cout << endl << "Працюй більше!";

    }
    if (zp > 999999){
        cout << "Да ти міліонер!";
    }
    if (zp > 999){
            if(zp < 1000000){
                cout << "Добре працюєш";
            }
    }
    cin.get();
    return 0;
}
