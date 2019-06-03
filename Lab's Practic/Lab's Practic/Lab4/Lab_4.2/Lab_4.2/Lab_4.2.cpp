// Lab_4.2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include<iostream>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds)
{
	return (3600 * hours) + (60 * minutes) + (seconds);
}


int main()

{



	int hours, minutes, seconds;
	bool s = true;

	while (s)
	{
		try {
			cout << "Enter hours,minutes,seconds" << endl;
			cin >> hours >> minutes >> seconds;
			cout << "Time in seconds =" << hms_to_secs(hours, minutes, seconds) << endl;
		}
		catch (exception e) { break; }
	}
	system("pause");

	return 0;
}

