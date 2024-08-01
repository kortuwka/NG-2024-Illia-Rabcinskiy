#include <iostream>

using namespace std;

int main(){
    int value;
    int max_chisla[20];
    int max_chislo=-1;
    int space;

    for (int currentValueIndex = 0;currentValueIndex < 20 ;currentValueIndex++){
        cout << "Enter value: ";
        cin >> max_chisla[currentValueIndex];
        while (max_chisla[currentValueIndex] < 0){
            cout << endl;
            cout << "Please enter a number greate than zero";
            cin >> max_chisla[currentValueIndex];
        }
        cout << endl;

        if (max_chisla[currentValueIndex] == 0){
                break;
        }
    }
    for(int currentValueIndex = 0;max_chisla[currentValueIndex] != 0;currentValueIndex++){
        if(max_chisla[currentValueIndex] > max_chislo){
            max_chislo = max_chisla[currentValueIndex];
        }
    }
    for (int currentValueIndex = 0;max_chisla[currentValueIndex] != 0;currentValueIndex++){
        space = (max_chislo - max_chisla[currentValueIndex])/2;
        while (space > 0){
            cout << " ";
            space --;
        }
        while (max_chisla[currentValueIndex] > 0){
            cout << "*";
            max_chisla[currentValueIndex]--;
        }
        cout << endl;
    }
    return 0;
}
