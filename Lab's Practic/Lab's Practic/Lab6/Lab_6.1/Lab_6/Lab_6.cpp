// Lab_6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double power(int x, int y = 2) {
	return pow(x, y);
}
double power(float x, int y = 2) {
	return pow(x, y);
}
double power(double x, int y = 2) {
	return pow(x, y);
}
int main()
{

	cout << power(3, 5) << endl;

	cout << power(3.0f, 5) << endl;

	cout << power(3.0230940292, 5) << endl;


    return 0;
}

