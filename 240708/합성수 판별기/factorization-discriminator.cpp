#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool res = false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			res = true;
		}
	}
	if (res) {
		cout << "C";
	}
	else {
		cout << "N";
	}
	return 0;
}