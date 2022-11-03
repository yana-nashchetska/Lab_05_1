// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y); // прототип

int main()
{
	double s, t;

		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (1. * (h(s * s, 1 + t) + h(1, s * t)) / (1 + h(s, t) * h(s, t)));
		
		
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return ((a + b + pow(a, 2) * pow(b, 2)) / (pow(a, 2) + pow(b, 2) * 1.));
}
