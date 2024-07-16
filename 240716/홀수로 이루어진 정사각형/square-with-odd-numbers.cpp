#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 11 + i * 2, k = 0; k < n; k++) {
			cout << j << " ";
			j += 2;
		}
		cout << "\n";
	}
	
	return 0;
}