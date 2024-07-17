#include <iostream>

using namespace std;

int bankAccounts[10] = {0,0,0,0,0,0,0,0,0,0};

int cout_accounts(){
    for (int row = 0; row < 10;row++){
        cout << " ";
        cout << bankAccounts[row];
    }
}
int max_and_min_schet(){
    int max_schet = 0;
    int min_schet = bankAccounts[0];
    int in_max_schet;
    int in_min_schet;
    for (int row = 0; row < 10; row++){
        if(bankAccounts[row] > max_schet){
            max_schet = bankAccounts[row];
            in_max_schet = row;
        }else if (bankAccounts[row] < min_schet){
            min_schet = bankAccounts[row];
            in_min_schet = row;
        }
    }
    cout << " maximum: " << max_schet << " " << in_max_schet;
    cout << " minimum: " << min_schet << " " << in_min_schet;
}
int main(){
    bool isRunning = true;
    int schet;
    float schet_minus;
    float schet_plus;
    int schet_cin;
    while (isRunning == true){
        cout << endl;
        cout << "If you want to deposit money, write 1, if you want to withdraw, write 2, if you want to view all accounts, then 3, if you close the program, then 4, if you want to display the maximum and minimum amount, write 5";
        cout << endl;
        cin >> schet;
        if (schet == 1 || schet == 2){
            cout << endl;
            cout << "On which one?";
            cin >> schet_cin;
            schet_cin--;
            cout << endl;
            cout << "How many?";
        }
        switch (schet){
            case 1:
                cin >> schet_plus;
                while(schet_plus < 1){
                    cout << endl;
                    cout << "Please enter a number greater than zero";
                    cin >> schet_plus;
                }
                bankAccounts[schet_cin] = bankAccounts[schet_cin] + schet_plus;
                cout << endl;
                cout_accounts();
                break;
            case 2:
                cin >> schet_minus;
                while(schet_minus < 1){
                    cout << endl;
                    cout << "Please enter a number greater than zero";
                    cin >> schet_minus;
                }
                if (bankAccounts[schet_cin] < 0){
                    cout << endl;
                    cout << "Credit on this account";
                }else{
                    bankAccounts[schet_cin] = bankAccounts[schet_cin] - schet_minus;
                }
                cout << endl;
                cout_accounts();
                break;
            case 3:
                cout_accounts();
                break;
            case 4:
                isRunning = false;
                break;
            case 5:
                max_and_min_schet();
                break;
        }
    }

    return 0;
}
