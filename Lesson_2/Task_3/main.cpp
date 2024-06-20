#include <iostream>
using namespace std;

int main(){
    int rows[5];
    int rows_0[5];
    int max_index = 0;
    for (int row = 0; row < 5; row++){
        cout << "Enter amount in row: ";
        cin >> rows[row];
        rows_0[row] = rows[row];
        cout << endl;
        if (rows[row] > max_index){
            max_index = rows[row];
        }
    }
    for (int row = 0; row < max_index; row++){
        for (int column = 0; column < 5; column++){
            if (rows_0[column] == 0){
                cout << " ";
            }else{
                cout << "*";
                rows_0[column] = rows_0[column] - 1;
            }
        }
        cout << endl;
    }
    return 0;;
}
