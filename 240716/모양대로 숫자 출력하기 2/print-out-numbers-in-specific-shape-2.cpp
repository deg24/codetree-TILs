#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 2, k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			cout << i << " ";
			if (i == 8)i = 0;
			i += 2;
		}
		cout << "\n";
	}
	
	return 0;
}