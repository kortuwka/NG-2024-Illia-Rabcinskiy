#include <iostream>
using namespace std;
int main(){
    cout << "The size of the tree: ";
    int g;
cin >> g;
int n = g;
int h = 1;
int p,k,s;
s = g;
p = g;
k = g;
g = h;
while(n > 0){
    while(g > 0){
        while(p > 0){
            cout << " ";
            p--;
        }
        cout << "*";
        g--;
    }
    k--;
    p = k;
    cout << endl;
    h = h + 2;
    g = h;
    n = n - 1;
}
while(s > 0){
    cout << " ";
    s--;
}
cout << "*";
return 0;

}
