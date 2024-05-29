#include <iostream>
#include <cmath>
using namespace std;

int main() {
	char c;
	int a;
	cin >> c >> a;
	if (c == 'A') {
		for (int i{ 0 }; i < a; i++) {
			cout << i + 1 << " ";
		}
	}
	else if (c == 'D') {
		for (int i{ a }; i > 0; i--) {
			cout << i << " ";
		}
	}
	return 0;
}