// Lab_7.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T amax(T n[], int length) {
	T max = n[0];
	for (int i = 1; i < length; i++) {
		if (n[i] > max) max = n[i];
		
	}
	return max;
}

int main()
{
	int a[] = {2, 3, 7, 9, 11, 32, 56};
	float b[] = {5.0, 3.0, 6.0, 32.0, 54.0, 32.0, 63.0};

	cout << amax(a, 7) << endl << amax(b, 7) ;
	cin >> a[6];


    return 0;
}

