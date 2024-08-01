#include <iostream>

using namespace std;

int main(){
    char Line[80];

    int space = 0;
    cout << "Enter the string: ";
    cin.getline(Line,80);

   for(int i=0; Line[i] != '\0' ; i++)
    {
        if((isalpha(Line[i])) !=(isalpha(Line[i+1]))) {
                if(isalpha(Line[i]))
                    space++;
        }

    }
    cout << endl;
    cout << "word count = ";
    cout << space;
    return 0;
}
