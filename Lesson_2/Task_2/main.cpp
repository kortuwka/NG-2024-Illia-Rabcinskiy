#include <iostream>
using namespace std;

int main(){
    int value;
    int chisla[19];
    int chisla_1 = 0;
    int max_index;
    int space;
    int for_while = 0;
    for (int k = 0; k < 20;k++){
        chisla[k] = 0;
    }
    for (int t = 0;t <= 20;t++){
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
    for(int i = 0;i < 20;i++){
        if(chisla[i] > max_index){
            max_index = chisla[i];
        }
    }
    for (int j = 0;j <= 20;j++){
        space = (max_index - chisla[j])/2;
        while (for_while < space){
            cout << " ";
            space = space - 1;
        }
        while (for_while < chisla[j]){
            cout << "*";
            chisla[j] = chisla[j] - 1;
        }
        cout << endl;
    }
    return 0;
}
