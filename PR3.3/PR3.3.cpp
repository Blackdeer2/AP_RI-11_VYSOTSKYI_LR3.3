// Lab_03_3.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x;
	double R;
	double y;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -6 -R) {
		y = 0;
	}
	else if (-6 - R < x && x <= -6) {
		y =  -sqrt(R * R - (x + 6) * (x + 6));
		if (y == 0) // при R= 3 і x = -9 y набуде значення 0 але в попередньому рядку 
			y *= -1; // в нас результати будуть з знаком - але -0 то якось не красиво тому ми робимо таку умову
	}
	else if (-6 < x && x <= -R) {
		y = (R * (R + x)) / (-R + 6);
	}
	else if (-R < x && x <= 0) {
		y = sqrt(R * R - x * x);
	}
	else if (0 < x && x <= 3) {
		y = (3 * R - R * x) / 3.;
	}
	else {
		y = (R * x - 3 * R) / 6.;
	}
	cout << "y = " << y << endl;

	return 0;
}