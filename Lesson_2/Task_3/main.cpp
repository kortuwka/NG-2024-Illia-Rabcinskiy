#include <iostream>
using namespace std;

int main(){
    int rows[5];
    int max_index = 0;
    for (int i = 0; i < 5; i++){
        cout << "Enter amount in row: ";
        cin >> rows[i];
        cout << endl;
        if (rows[i] > max_index){
            max_index = rows[i];
        }
    }
    for (int j = 0; j < max_index; j++){
        for (int k = 0; k < 5; k++){
            if (rows[k] == 0){
                cout << " ";
            }else{
                cout << "*";
                rows[k] = rows[k] - 1;
            }
        }
        cout << endl;
    }
    return 0;;
}
