#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int x0;
    int y;
    int y0;
    cout << "Circle center:";
    cout << endl;
    cin >> x0;
    cin >> y0;
    cout << "Costi coordinates:";
    cout << endl;
    cin >> x;
    cin >> y;
    int N;
    cout << "Radius:";
    cout << endl;
    cin >> N;
    int a = x - x0;
    int b = y - y0;
    int c = sqrtl(a * a + b * b);
    if (c < N){
        cout << "Distance to the center of the circle:";
        cout << c;
    }else{
        cout << "There is no danger to the bone";
    }
    return 0;
}
