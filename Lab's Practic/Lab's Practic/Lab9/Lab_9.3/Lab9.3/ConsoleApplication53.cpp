// ConsoleApplication53.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


struct Phone
{
	int CC;
	int CO;
	int CA;
	char FirstName[20];
	char LastName[20];
};

int main()
{

	Phone notebook[5];
	for (int i = 0; i < 5; i++) {
		cin >> notebook[i].FirstName >> notebook[i].LastName >> notebook[i].CC >> notebook[i].CO >> notebook[i].CA;
	}
	char a[20], b[20];

	cin >> a >> b;
	bool u = true;

	auto search = [&](int i) {
		for (int j = 0; j < strlen(a); j++) {
			if (a[j] != notebook[i].FirstName[j]) {
				return;
			}
		}
		for (int j = 0; j < strlen(b); j++) {
			if (b[j] != notebook[i].LastName[j]) {
				return;
			}
		}
		cout << i + 1;
		u = false;
		
	};

	for (int i = 0; i < 5; i++) {
		if (strlen(a) == strlen(notebook[i].FirstName) && strlen(b) == strlen(notebook[i].LastName)) {
			search(i);
		}
	}
	if (u) {
		cout << -1;
	}

	/*
	for (int i = 0; i < 5; i++) {
		cout << notebook[i].FirstName +' ' << notebook[i].LastName + ' '<<  notebook[i].CC << "(" <<
			notebook[i].CO << ")" <<
			(int)notebook[i].CA / 10000 << "-" << notebook[i].CA / 100 % 100 << "-" << notebook[i].CA % 100 << endl;
	}*/
	cin >> notebook[2].CC;


    return 0;
}

