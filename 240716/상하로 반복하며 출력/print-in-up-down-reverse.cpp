#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1, l = n, k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			if (j % 2 == 0) {
				cout << i;
			}
			else cout << l;
		}
		i += 1;
		l -= 1;
		cout << "\n";
	}
	
	return 0;
}