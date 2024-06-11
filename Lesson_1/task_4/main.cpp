#include <iostream>
#include <cmath>
using namespace std;
int main (){
    cout << "If + then write 0, if - then 1, if * then 2, if / then 3, if the square then 4, if the root then 5:" << endl;
    int znak;
    cin >> znak;
    int first_number;
    int second_number;
    if (znak == 0){
        cout << endl;
        cin >> first_number;
        cout << endl;
        cin >> second_number;
        cout << first_number + second_number;
    }
    if (znak == 1){
        cout << endl;
        cin >> first_number;
        cout << endl;
        cin >> second_number;
        cout << first_number - second_number;
    }
    if (znak == 2){
        cout << endl;
        cin >> first_number;
        cout << endl;
        cin >> second_number;
        cout << first_number * second_number;
    }
    if (znak == 3){
        cout << endl;
        cin >> first_number;
        cout << endl;
        cin >> second_number;
        cout << first_number / second_number;
    }
    if (znak == 4){
        cout << endl;
        cin >> first_number;
        cout << endl;
        cout << first_number * first_number;
    }
    if (znak == 5){
        cin >> first_number;
        cout << endl;
        while (first_number < 0){
            cin >> first_number;
        }
        cout << sqrtl(first_number) << endl;

    }
    return 0;
}
