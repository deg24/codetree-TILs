#include <iostream>
using namespace std;

int main() {
	int n = 20, cnt = 0;
	double s = 0;
	while (n >= 20 && n < 30) {
		cin >> n;
		if (n < 20 || n >= 30) break;
		s += n;
		cnt++;
	}
	cout << fixed;
	cout.precision(2);
	cout << s / cnt;
	return 0;
}