// Lab_1.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int a = 10;
	int b = a*2;
	cout << a << endl;
	cout << b << endl;
	cout << --b;
	cin >> b;
    return 0;
}

