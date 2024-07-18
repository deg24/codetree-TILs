#include <iostream>
using namespace std;

int main() {
	int n, a = 65;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++, a++) {
			cout << (char)a << " ";
			if (a == 90) a = 64;
		}
		cout << "\n";
	}
	
	return 0;
}