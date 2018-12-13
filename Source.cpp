#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

//Variant 8

int main(){
	long float z1, z2, x, y;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25*(pow(sin(2 * x), 2)) - 1;
	z2 = sin(y + x)*sin(y - x);
	if (z1 > z2) cout << "z1 > z2" << endl;
	if (z1 == z2) cout << "z1 = z2" << endl;
	if (z1 < z2) cout << "z1 < z2" << endl;
	cin.get();
	cin.get();
	return 0;
}