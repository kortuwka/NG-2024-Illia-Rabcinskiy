#include <iostream>

using namespace std;

int main(){
    bool isRunning = true;
    int schet;
    float schet_minus;
    float schet_plus;
    int schet_cin;
    int bankAccounts[10] = {0,0,0,0,0,0,0,0,0,0};
    while (isRunning == true){
        cout << endl;
        cout << "If you want to deposit money, write 1, if you want to withdraw, write 2, if you want to view all accounts, then 3, if you close the program, then 4";
        cout << endl;
        cin >> schet;
        if (schet == 1 || schet == 2){
            cout << endl;
            cout << "On which one?";
            cin >> schet_cin;
            cout << endl;
            cout << "How many?";
        }
        switch (schet){
            case 1:
                cin >> schet_plus;
                bankAccounts[schet_cin] = bankAccounts[schet_cin] + schet_plus;
                cout << endl;
                for (int row = 0; row < 10;row++){
                    cout << " ";
                    cout << bankAccounts[row];
                }
                break;
            case 2:
                cin >> schet_minus;
                if (bankAccounts[schet_cin] < 0){
                    cout << endl;
                    cout << "Credit on this account";
                }else{
                    bankAccounts[schet_cin] = bankAccounts[schet_cin] - schet_minus;
                }
                cout << endl;
                for (int row = 0; row < 10;row++){
                    cout << " ";
                    cout << bankAccounts[row];
                }
                break;
            case 3:
                for (int row = 0; row < 10;row++){
                    cout << " ";
                    cout << bankAccounts[row];
                }
                break;
            case 4:
                isRunning = false;
                break;
        }
    }

    return 0;
}
