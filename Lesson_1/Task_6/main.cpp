#include <iostream>
using namespace std;
int main(){
    cout << "The size of the tree: ";
    int sizeTree;
    cin >> sizeTree;
    int interval = sizeTree;
    int star = 1;
    for (int n = sizeTree; n > 0; n--)
    {   for (int i = interval; i > 0; i--)
        {
            cout << " ";
        }
        for (int i = star; i > 0; i--)
        {
            cout << "*";
        }
        interval--;
        cout << endl;
        star = star + 2;
    }
    for (int i = sizeTree; i > 0; i--)
    {
        cout << " ";
    }
    cout << "*";
    return 0;

}
