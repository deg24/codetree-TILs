#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = 0, k = 2; i < 4; i++, k+=2) {
		for (int j = b; j >= a; j--) {
			if (j != a) {
				cout << j << " * " << k << " = " << j * k << " / ";
			}
			else {
				cout << j << " * " << k << " = " << j * k;
			}
		}
		cout << "\n";
	}
	
	return 0;
}