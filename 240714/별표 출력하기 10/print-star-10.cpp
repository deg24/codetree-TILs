#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n*2; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j < 1 + i / 2; j++) {
				cout << "* ";
			}
		}
		else {
			for (int k = 0; k < n - i / 2 + 1; k++) {
				cout << "* ";
			}
		}
		cout << "\n";
	}
	return 0;
}