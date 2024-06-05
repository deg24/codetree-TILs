#include <iostream>
using namespace std;

int main() {
	int a, b, s, n;
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