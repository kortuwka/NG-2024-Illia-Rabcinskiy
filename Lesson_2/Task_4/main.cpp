#include <iostream>


using namespace std;

int main(){
    char Line;
    int chisla = 0;
    int space = 0;
    cin.get(Line);
    while(Line != '\n')
    {
        if(Line==' ') {
                    space++;
        }
        if (Line == '1' || Line == '0' || Line == '2' || Line == '3' || Line == '4' || Line == '5' || Line == '6' || Line == '7' || Line == '8' || Line == '9'){
            if(chisla == 0){
                space++;
                chisla++;
            }
        }else{
            chisla = 0;
        }
        cin.get(Line);
    }
    cout << endl;
    space++;
    cout << "word count = ";
    cout << space;
    return 0;
}
