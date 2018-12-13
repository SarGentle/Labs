#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

//Variant 2

int main(){
	long float z1, z2, a;
	cout << "Enter a" << endl;
	cin >> a;
	z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
	z2 = 2*sqrt(2)*cos(a)*sin(3.14/4 + 2*a);
	if (z1 > z2) cout << "z1 > z2" << endl;
	if (z1 == z2) cout << "z1 = z2" << endl;
	if (z1 < z2) cout << "z1 < z2" << endl;
	cin.get();
	cin.get();
	return 0;
}
