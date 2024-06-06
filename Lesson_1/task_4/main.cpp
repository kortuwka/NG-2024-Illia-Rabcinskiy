#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main (){
    setlocale(LC_ALL, "Ukrainian");
    cout << "‗ךשמ + עמ םאןטרט 0, ÿךשמ - עמ 1, ÿךשמ * עמ 2, ÿךשמ / עמ 3, ÿךשמ ךגאהנאע עמ 4, ÿךשמ ךמנוםü עמ 5:" << endl;
    int znak;
    cin >> znak;
    int b;
    int c;
    if (znak == 0){
            cout << endl;
        cin >> b;
    cout << endl;
    cin >> c;
    cout << b + c;
    }
    if (znak == 1){
            cout << endl;
        cin >> b;
    cout << endl;
    cin >> c;
    cout << b - c;
    }
    if (znak == 2){
            cout << endl;
        cin >> b;
    cout << endl;
    cin >> c;
    cout << b * c;
    }
    if (znak == 3){
            cout << endl;
        cin >> b;
    cout << endl;
    cin >> c;
    cout << b / c;
    }
    if (znak == 4){
            cout << endl;
        cin >> b;
    cout << endl;
    cout << b * b;
    }
    if (znak == 5){
            cin >> b;
            cout << endl;
            while (b < 0){
                cin >> b;
            }
            cout << sqrtl(b) << endl;

    }
    return 0;
}
