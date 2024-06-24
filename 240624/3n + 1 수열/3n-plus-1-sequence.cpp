#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	while (1) {
		if (n % 2 == 0) {
			n /= 2;
			cnt++;
		}
		else if (n % 2 == 1) {
			n = n * 3 + 1;
			cnt++;
		}
		if (n == 1) {
			break;
		}
	}
	cout << cnt;
	return 0;
}