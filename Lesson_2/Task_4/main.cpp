#include <iostream>

using namespace std;

int main(){
    char str[]="Hello word hello hjhjhj bjbjhjh";
    //cin >> str;
    int len = 0;
    for(int index_0=0; str[index_0]!='\0';index_0++)
    {
        len++;
    }
    cout << len;
    int kil = 0;
    for (int index_1 = 0; index_1 < len;index_1++){
        if (str[index_1] == ' '){
            kil++;
        }
    }
    cout << endl;
    kil++;
    cout << "word count = ";
    cout << kil;
    return 0;
}
