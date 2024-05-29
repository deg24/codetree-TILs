#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i{ 0 }; i < a; i++) {
		if ((i + 1) % 2 == 0 || (i + 1) % 3 == 0) {
			cout << 1 << " ";
		}
		else cout << 0 << " ";
	}
	return 0;
}