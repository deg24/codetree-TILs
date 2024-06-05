#include <iostream>
using namespace std;

int main() {
	int a, s = 0;
	cin >> a;
	for (int i{ 2 }; i <= a; i++) {
		if (a % i == 0) {
			s += a/i;
		}
	}
	if (a == s) cout << "P";
	else cout << "N";
	return 0;
}