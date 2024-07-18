#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int k = n;
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++, k--) {
			cout << k - i << " ";
		}
		cout << "\n";
	}
	
	return 0;
}