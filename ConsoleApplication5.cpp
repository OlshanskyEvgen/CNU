﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    double x11, x12, x13, x21, x22, x23, x31, x32, x33, F ;
    cout << "enter " << "x11 " << "x12 " << "x13 " << endl;
    cin >> x11 >> x12 >> x13 ;
    cout << "enter " << "x21 " << "x22 " << "x23 " << endl;
    cin >> x21 >> x22 >> x23;
    cout << "enter " << "x31 " << "x32 " << "x33 " << endl;
    cin >> x31 >> x32 >> x33;
    F = (x11*x22*x33) + (x12*x23*x31) + (x13* x21* x32) - (x13* x22 * x31) - (x11 * x23 * x32) - (x12 * x21 * x33);
    cout << F;

    
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
