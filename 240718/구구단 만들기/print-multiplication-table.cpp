#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = 0, k = 1; i < 9; i++, k++) {
		for (int j = b; j >= a; j -= 2) {
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