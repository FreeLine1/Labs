// Lab_5.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int *a, int *b) 
{
	int c = *a;
	*a = *b;
	*b= c;
}

int main()
{
	int a = 9;
	int b = 7;
	cout << endl << a << "   " << b;

	swap(&a, &b);

	cout << endl << a << "   " << b;
	cin >> a;
    return 0;
}

