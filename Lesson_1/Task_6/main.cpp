#include <iostream>
using namespace std;
int main(){
    cout << "The size of the tree: ";
    int sizeTree;
cin >> sizeTree;
int n = g;
int h = 1;
int p,k,s;
s = sizeTree;
p = sizeTree;
k = sizeTree;
sizeTree = h;
while(n > 0){
    while(sizeTree > 0){
        while(p > 0){
            cout << " ";
            p--;
        }
        cout << "*";
        sizeTree--;
    }
    k--;
    p = k;
    cout << endl;
    h = h + 2;
    sizeTree = h;
    n = n - 1;
}
while(s > 0){
    cout << " ";
    s--;
}
cout << "*";
return 0;

}
