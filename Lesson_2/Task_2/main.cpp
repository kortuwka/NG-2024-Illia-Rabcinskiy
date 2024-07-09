#include <iostream>

using namespace std;

int main(){
    int value;
    int max_chisla[20];
    int max_index=-1;
    int space;
    int for_while = 0;
    for (int currentValueIndex = 0; currentValueIndex < 20; currentValueIndex++){
        max_chisla[currentValueIndex] = 0;
    }
    for (int currentValueIndex = 0;currentValueIndex < 20 ;currentValueIndex++){
        cout << "Enter value: ";
        cin >> max_chisla[currentValueIndex];
        cout << endl;

        if (max_chisla[currentValueIndex] == 0){
            currentValueIndex = currentValueIndex + 30;
        }
    }
    for(int currentValueIndex = 0;max_chisla[currentValueIndex] != 0;currentValueIndex++){
        if(max_chisla[currentValueIndex] > max_index){
            max_index = max_chisla[currentValueIndex];
        }
    }
    for (int currentValueIndex = 0;max_chisla[currentValueIndex] != 0;currentValueIndex++){
        space = (max_index - max_chisla[currentValueIndex])/2;
        while (for_while < space){
            cout << " ";
            space = space - 1;
        }
        while (for_while < max_chisla[currentValueIndex]){
            cout << "*";
            max_chisla[currentValueIndex] = max_chisla[currentValueIndex] - 1;
        }
        cout << endl;
    }
    return 0;
}
