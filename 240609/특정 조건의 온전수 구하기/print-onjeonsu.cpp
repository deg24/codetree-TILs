#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			if (i % 10 != 5) {
				if (i % 3 == 0) {
					if (i % 9 == 0) {
						cout << i << " ";
						continue;
					}
				}
				cout << i << " ";
			}
		}
	}
	return 0;
}