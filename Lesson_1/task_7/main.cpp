#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Ukrainian");
    int x;
    int x0;
    int y;
    int y0;
    cout << "����� ����:";
    cout << endl;
    cin >> x0;
    cin >> y0;
    cout << "���������� ����:";
    cout << endl;
    cin >> x;
    cin >> y;
    int N;
    cout << "�����:";
    cout << endl;
    cin >> N;
    int a = x - x0;
    int b = y - y0;
    int c = sqrtl(a * a + b * b);
    if (c < N){
        cout << "³������ �� ������ ����:";
        cout << c;
     }else{
        cout << "���� ����� �� �������";
    }
    return 0;
}
