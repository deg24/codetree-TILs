#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0, k = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++, k++) {
			cout << k << " ";
			if (k == 9) k = 0;
		}
		cout << "\n";
	}
	
	return 0;
}