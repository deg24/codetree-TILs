#include <iostream>
using namespace std;

int main() {
	int a[10], n1 = 0, cnt = 0;
	double n2 = 0;

	cout << fixed;
	cout.precision(1);

	for (int i = 1; i <= 10; i++) {
		cin >> a[i - 1];
		if (i % 2 == 0) {
			n1 += a[i - 1];
		}
		if (i % 3 == 0) {
			n2 += a[i - 1];
			cnt++;
		}
	}
	
	cout << n1 << " " << n2 / cnt;

	return 0;
}