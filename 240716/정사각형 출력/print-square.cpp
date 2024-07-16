#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1, k = 1; k <= n; k++) {
		for (int j = 0; j < n; j++, i++) {
			cout << i << " ";
		}
		cout << "\n";
	}
	
	return 0;
}