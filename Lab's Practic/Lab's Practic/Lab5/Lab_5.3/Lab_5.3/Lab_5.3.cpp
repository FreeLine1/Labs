// Lab_5.3.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include<iostream>
using namespace std;

struct Distance 



{
	int feet;
	float inches;
};
bool isbigger(Distance &d1, Distance &d2)
{

	return d1.feet*12 + d1.inches<d2.feet*12 + d2.inches ? true : false;
}



int main() {
	setlocale(0, "");

	Distance d1, d2; 

					 

	cout << "Введіть число футів 1: ";
	cin >> d1.feet;
	cout << "Введіть число дюймів 1:";
	cin >> d1.inches;
	cout << "Введіть число футів 2: ";
	cin >> d2.feet;
	cout << "Введіть число дюймів 2:";
	cin >> d2.inches;
	cout << isbigger(d1, d2);
	system("pause");



	return 0;
