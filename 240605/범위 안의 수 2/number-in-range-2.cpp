#include <iostream>
using namespace std;

int main() {
	int a[10], s = 0, n = 0;
	for (int i{ 0 }; i < 10; i++) {
		cin >> a[i];
		if (a[i] >= 0 && a[i] <= 200) {
			s += a[i];
			n++;
		}
	}
	cout << fixed;
	cout.precision(1);
	cout << s << " " << (double)s / n;
	return 0;
}