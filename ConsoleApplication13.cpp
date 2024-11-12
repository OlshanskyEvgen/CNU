#include <iostream>
#include <iomanip>
#include <windows.h>
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

int AFunc(int, int, int);
int BFunc(float, float, float);
bool CFunc(float, float);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, y, a, z, c2;
    int c1;
    cout << "введіть значення x : ";
    cin >> x;
    cout << "введіть значення y : ";
    cin >> y;
    cout << "введіть значення a : ";
    cin >> a;
    cout << "введіть значення x : ";
    cin >> z;
    cout << "функція A = " << AFunc(x, y, a) << endl;
    cout << "функція B = " << BFunc(x, y,  z ) << endl;
    c1 = AFunc(x, y, a);
    c2 = BFunc(x, y, z);
    cout << "A <= B " << boolalpha<< CFunc(c1, c2 );
}

int AFunc(int x, int y, int a) {
    float A;
    a = (a * (M_PI / 180)) + 1, 8326 ;
    y = pow(y , 3);
    A = (2* pow(cos((5*x) + (M_PI/3)),2))/(pow(sin(y),2)) + cos(a);
        return  (pow(sin(pow(y, 3)), 2) != 0) ? A : 0 ;
}
int AFunc(int x, int y, int a) {
    float A;
    a = (a * (M_PI / 180)) + 1, 8326;
    y = pow(y, 3);
    A = (2 * pow(cos((5 * x) + (M_PI / 3)), 2)) / (pow(sin(y), 2)) + cos(a);
    return  (pow(sin(pow(y, 3)), 2) != 0) ? A : 0;
}

}
bool CFunc(float x1, float x2) {
    return (x1 <= x2) ? true : false;
}