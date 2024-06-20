#include <iostream>

using namespace std;

int main(){
    bool while_1 = true;
    int schet;
    float schet_minus;
    float schet_plus;
    int schet_cin;
    int mas[10] = {0,0,0,0,0,0,0,0,0,0};
    while (while_1 == true){
        cout << endl;
        cout << "If you want to deposit money, write 1, if you want to withdraw, write 2, if you want to view all accounts, then 3, if you close the program, then 4";
        cout << endl;
        cin >> schet;
        switch (schet){
        case 1:
            cout << endl;
            cout << "How many?";
            cin >> schet_plus;
            cout << endl;
            cout << "On which one?";
            cin >> schet_cin;
            mas[schet_cin] = mas[schet_cin] + schet_plus;
            cout << endl;
            for (int row = 0; row < 10;row++){
                cout << " ";
                cout << mas[row];
            }
            break;
        case 2:
            cout << endl;
            cout << "How many?";
            cin >> schet_minus;
            cout << endl;
            cout << "On which one?";
            cin >> schet_cin;
            if (mas[schet_cin] < 0){
                cout << endl;
                cout << "Credit on this account";
            }else{
            mas[schet_cin] = mas[schet_cin] - schet_minus;
            }
            cout << endl;
            for (int row = 0; row < 10;row++){
                cout << " ";
                cout << mas[row];
            }
            break;
        case 3:
            for (int row = 0; row < 10;row++){
                cout << " ";
                cout << mas[row];
            }
            break;
        case 4:
            while_1 = false;
            break;
        }
    }

    return 0;
}
