#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// Variant 12

int main() {
	long double A, B, F = 0, dx, eps;
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
	cout << "Enter dx" << endl;
	cin >> dx;
	cout << "Enter eps" << endl;
	cin >> eps;
	int n = 0;
	cout << " +-----+------------------+-----+" << endl;
	cout << " |  x  |      f(x)        |  N  |" << endl;
	cout << " +-----+------------------+-----+" << endl;
	while (A <= B) {
		F = A;
		long double pl = pow(2, 0)*pow((A + n * dx), 1);
		if (eps < pl) {
			F = F + pl;
			pl = pow(2, 2)*pow((A + n * dx), 2) / 5;
		}
		else break;
		if (eps < pl) {
			F = F - pl;
			pl = pow(2, 3)*pow((A), 3) / 10;
		}
		else break;
		if (eps < pl) {
			F = F + pl;
			pl = pow(2, 4)*pow((A), 4) / 17;
		}
		else break;
		if (eps < pl) {
			F = F - pl;
			pl = pow(2, 5)*pow((A), 5) / 26;
		}
		else break;
		if (eps < pl) {
			F = F + pl;
		}
		else break;
		n = n + 1;
		A = A + dx;
		cout << " |" << A << "  |" << "  " << F << "         |  " <<  n <<  "  | " << endl;
		cout << " +-----+------------------+-----+" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
