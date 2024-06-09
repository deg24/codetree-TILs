#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0 && i % 10 == 5 && (i % 3 == 0 && i % 9 != 0)) {
		}
		else {
			cout << i << " ";
		}
	}
	return 0;
}