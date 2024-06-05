#include <iostream>
using namespace std;

int main() {
	int n, a = 0;
	cin >> n;
	for (int i{ 1 }; i <= n; i++) {
		if (i % 4 == 0) {
			if (i % 400 == 0) {
				a++;
			}
			else if (i % 100 == 0) {}
			else a++;
		}
	}
	cout << a;
	return 0;
}