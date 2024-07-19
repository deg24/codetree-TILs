#include <iostream>
using namespace std;

int main() {
	int a[10], s1 = 0, s2 = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (i % 2 == 0) s1 += a[i];
		else s2 += a[i];
	}

	if (s1 < s2) {
		int temp;

		temp = s1;
		s1 = s2;
		s2 = temp;
	}

	cout << s1 - s2;

	return 0;
}