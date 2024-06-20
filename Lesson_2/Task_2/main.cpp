#include <iostream>
using namespace std;

int main(){
    int value;
    int chisla[19];
    int chisla_1 = 0;
    int max_index;
    int space;
    int for_while = 0;
    for (int index_0 = 0; index_0 < 20;index_0++){
        chisla[index_0] = 0;
    }
    for (int row = 0;row <= 20;row++){
        cout << "Enter value: ";
        cin >> value;
        cout << endl;

        if (value == 0){
            row = 30;
        }else{
            chisla[chisla_1] = value;
            chisla_1++;
        }
    }
    for(int row = 0;row < 20;row++){
        if(chisla[row] > max_index){
            max_index = chisla[row];
        }
    }
    for (int row = 0;row <= 20;row++){
        space = (max_index - chisla[row])/2;
        while (for_while < space){
            cout << " ";
            space = space - 1;
        }
        while (for_while < chisla[row]){
            cout << "*";
            chisla[row] = chisla[row] - 1;
        }
        cout << endl;
    }
    return 0;
}
