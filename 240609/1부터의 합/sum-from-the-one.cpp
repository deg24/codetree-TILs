#include <iostream>
using namespace std;

int main() {
	int n, s=0;
	cin >> n;
	for (int i = 1; i <= 100; i++) {
		s += i;
		if (s >= n) {
			cout << i;
			break;
		}
	}
	return 0;
}