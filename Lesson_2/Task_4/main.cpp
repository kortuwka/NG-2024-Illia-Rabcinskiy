#include <iostream>

using namespace std;

int main(){
    char str[]="Hello word hello hjhjhj bjbjhjh";
    //cin >> str;
    int len = 0;
    for(int i=0; str[i]!='\0';i++)
    {
        len++;
    }
    cout << len;
    int kil = 0;
    for (int i = 0; i < len;i++){
        if (str[i] == ' '){
            kil++;
        }
    }
    cout << endl;
    kil++;
    cout << "word count = ";
    cout << kil;
    return 0;
}
