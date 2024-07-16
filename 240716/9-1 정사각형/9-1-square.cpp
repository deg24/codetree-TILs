#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 9, k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			cout << i;
			if (i == 1)i = 10;
			i -= 1;
		}
		cout << "\n";
	}
	
	return 0;
}