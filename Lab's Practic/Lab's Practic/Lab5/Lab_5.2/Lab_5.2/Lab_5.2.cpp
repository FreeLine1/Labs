// Lab_5.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;

}

int main()
{
	int a = 9, b = 7;
	cout << a << "   " << b << endl;
	swap(a, b);
	cout << a << "   " << b << endl;
	cin >> a;
    return 0;
}

