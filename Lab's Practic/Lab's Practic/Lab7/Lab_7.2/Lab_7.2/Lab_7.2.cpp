// Lab_7.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
template <typename T>
float S(T n[], int length) {

	int s = 0;
	for (int i = 0; i < length; i++) 
		s += n[i];
	return (float) s / length;
}

char S(char n[], int length) {
	char a = n[0];
	int k1 = 0, k2 = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (n[i] == n[j])
				k1++;
		}
		if (k1 > k2) { k2 = k1; a = n[i]; }
		k1 = 0;
	}
	return a;
}


int main()
{
	int b[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	char a[] = {'d', 't', 't', '2', 't', '3', '2', '5', '7', '9', '1', '2', '2'};

	double c[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
	cout << S(a, 13) << endl << S(b, 9) << endl << S(c, 9);
	cin >> a[4];
    return 0;
}

