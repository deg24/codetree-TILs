#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1, k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			if (k % 2 == 0) {
				cout << i << " ";
				i += 1;
			}
			else {
				cout << i << " ";
				i -= 1;
			}
		}
		if (k % 2 == 0) {
			i += n - 1;
		}
		else {
			i += n + 1;
		}
		cout << "\n";
	}
	
	return 0;
}