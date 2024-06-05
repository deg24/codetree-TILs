#include <iostream>
using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	int a, b, s=0, n=0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 5 == 0 || i % 7 == 0) {
			s += i;
			n++;
		}
	}
	cout << s << " " << (double)s / n;
	return 0;
}