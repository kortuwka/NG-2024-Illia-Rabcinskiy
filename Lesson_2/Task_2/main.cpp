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
    for (int index_1 = 0;index_1 <= 20;index_1++){
        cout << "Enter value: ";
        cin >> value;
        cout << endl;

        if (value == 0){
            t = 30;
        }else{
            chisla[chisla_1] = value;
            chisla_1++;
        }
    }
    for(int index_2 = 0;index_2 < 20;index_2++){
        if(chisla[i] > max_index){
            max_index = chisla[index_2];
        }
    }
    for (int index_3 = 0;index_3 <= 20;index_3++){
        space = (max_index - chisla[index_3])/2;
        while (for_while < space){
            cout << " ";
            space = space - 1;
        }
        while (for_while < chisla[index_3]){
            cout << "*";
            chisla[index_3] = chisla[index_3] - 1;
        }
        cout << endl;
    }
    return 0;
}
