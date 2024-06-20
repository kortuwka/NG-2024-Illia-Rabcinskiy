#include <iostream>
using namespace std;

int main(){
    int value;
    int chisla[20];
    int chisla_1 = 0;
    int max_index=-1;
    int space;
    int for_while = 0;
    for (int currentValueIndex = 0; currentValueIndex < 20; currentValueIndex++){
        chisla[currentValueIndex] = 0;
    }
    for (int currentValueIndex = 0;currentValueIndex < 20 ;currentValueIndex++){
        cout << "Enter value: ";
        cin >> chisla[currentValueIndex];
        cout << endl;

        if (chisla[currentValueIndex] == 0){
            currentValueIndex = 30;
        }
        }
    for(int currentValueIndex = 0;chisla[currentValueIndex] != 0;currentValueIndex++){
        if(chisla[currentValueIndex] > max_index){
            max_index = chisla[currentValueIndex];
        }
    }
    for (int currentValueIndex = 0;chisla[currentValueIndex] != 0;currentValueIndex++){
        space = (max_index - chisla[currentValueIndex])/2;
        while (for_while < space){
            cout << " ";
            space = space - 1;
        }
        while (for_while < chisla[currentValueIndex]){
            cout << "*";
            chisla[currentValueIndex] = chisla[currentValueIndex] - 1;
        }
        cout << endl;
    }
    return 0;
}
