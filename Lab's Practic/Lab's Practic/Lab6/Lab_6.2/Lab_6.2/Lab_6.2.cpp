// Lab_6.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
long time_to_sec(int h, int m, int s) {
	return h * 60 * 60 + m * 60 + s;

}
long time_to_sec(int m, int s) {
	return m * 60 + s;
}

int main()
{
	int h, m, s;

	while (true){
		cin >> h >> m >> s;
		if (h == 0) cout << time_to_sec(m, s) << endl;
		else cout << time_to_sec(h, m, s) << endl;
	}
    return 0;
}

