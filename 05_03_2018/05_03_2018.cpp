// 05_03_2018.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int f1(int x) {
	if (x == 0) {
		return 0;
	}
	else {
		if (x % 2 == 0) {
			return 3 + f1(x / 10);
		}
		else {
			return 4 + f1(x / 10);
		}
	}
}

int f2(int x, int y) {
	if (x == 0) {
		return 0;
	}
	else {
		if (x % 10 == y) {
			return f2(x / 10, y) + 1;
		}
		else {
			return f2(x / 10, y);
		}
	}
}

void f3(int x) {
	if (x <= 10) {
		cout << 0 << " ";
	}
	else {
		f3(x - 2);
		cout << x << " ";
	}
}

int main()
{
	int x1, x2, x3, y2;

	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "x3 = "; cin >> x3;
	cout << "y2= "; cin >> y2;

	cout << endl;

	cout << "f1 = " << f1(x1) << endl;

	cout << "f2 = " << f2(x2, y2) << endl;

	cout << "f3 = "; f3(x3); cout << endl;
}

