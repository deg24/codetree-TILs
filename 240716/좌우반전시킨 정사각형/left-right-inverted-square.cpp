#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n * i, k = 0; k < n; k++) {
			cout << j << " ";
			j -= i;
		}
		cout << "\n";
	}
	
	return 0;
}