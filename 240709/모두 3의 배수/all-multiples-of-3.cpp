#include <iostream>
using namespace std;

int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	bool res = true;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 3 != 0) {
			res = false;
		}
	}
	if (res) cout << 1;
	else cout << 0;
	return 0;
}