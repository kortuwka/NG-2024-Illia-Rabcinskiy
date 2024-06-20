#include <iostream>

using namespace std;

int main(){
    char Line;
    int space = 0;
    cin.get(Line);
    while(Line != '\n')
    {
        if(Line == ' ') {space++;}
        cin.get(Line);
    }
    cout << endl;
    space++;
    cout << "word count = ";
    cout << space;
    return 0;
}
