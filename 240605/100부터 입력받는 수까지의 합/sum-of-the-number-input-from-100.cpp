#include <iostream>
using namespace std;

int main() {
	int n, s = 0;
	cin >> n;
	for (int i = n; i <= 100; i++) {
		s += i;
	}
	cout << s;
	return 0;
}