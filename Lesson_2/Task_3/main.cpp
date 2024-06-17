#include <iostream>
using namespace std;

int main(){
    int rows[5];
    int max_index = 0;
    for (int index_0 = 0; index_0 < 5; index_0++){
        cout << "Enter amount in row: ";
        cin >> rows[index_0];
        cout << endl;
        if (rows[index_0] > max_index){
            max_index = rows[index_0];
        }
    }
    for (int index_1 = 0; index_1 < max_index; index_1++){
        for (int index_2 = 0; index_2 < 5; index_2++){
            if (rows[index_2] == 0){
                cout << " ";
            }else{
                cout << "*";
                rows[index_2] = rows[index_2] - 1;
            }
        }
        cout << endl;
    }
    return 0;;
}
