#include <iostream>
using namespace std;

int main() {
	int n = 1, cnt = 0;
	double s = 0;
	while (n >= 20 && n < 30) {
		cin >> n;
		if (n < 20 || n >= 30) break;
		s += n;
		cnt++;
	}
	cout << s / cnt;
	return 0;
}