#include <iostream>
using namespace std;

// Номер 1

/*int main() {
	int n, C, R = 0; 
	cin >> n;
	cout << "Enter C = ";
	cin >> C;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < C)
			R++;
	}
	cout << endl;
	cout << R << endl;
	cin.get();
	cin.get();
	return 0;
}*/

// Номер 2

/*int main() {
	int n = 0, s = 0, res = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0) res = i;
	}	
	for (int i = res + 1; i < n; i++)
		s = s + a[i];
	if (res == n) s = 0;
	cout << s << endl;
	cin.get();
	cin.get();
	return 0;
}*/

// Номер 3

/*int main() {
	int  n;
	cout << "Enter n" << endl;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 21;
		cout << a[i] << " ";
	}
	cout << endl;
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << "max = " << max <<  endl;
	for (int i = 0; i < n; i++) {
		if ((a[i] >= (max - max/5)) && (a[i] <= (max + max/5))) {
			cout << a[i] << " ";
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < (max - max/5) || (a[i] > (max + max/5))) {
			cout << a[i] << " ";
		}
	}
	cin.get();
	cin.get();
	return 0;
}
*/