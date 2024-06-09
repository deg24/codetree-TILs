#include <iostream>
using namespace std;

int main() {
	int n=1, cnt = 0;
	while (cnt < 3) {
		cin >> n;
		if (n % 2 == 1) {}
		else {
			cout << n / 2 << "\n";
			cnt++;
		}
	}
	return 0;
}