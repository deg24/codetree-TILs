#include <iostream>
using namespace std;

int main() {
	char c;
	int n, a[4] = { 0, };

	for (int i = 0; i < 3; i++) {
		cin >> c >> n;
		if (c == 'Y' && n >= 37) a[0]++;
		if (c == 'N' && n >= 37) a[1]++;
		if (c == 'Y' && n < 37) a[2]++;
		if (c == 'N' && n < 37) a[3]++;
	}

	for (int i = 0; i < 4; i++) {
		cout << a[i] << " ";
	}
	
	if (a[0] >= 2) cout << 'E';

	return 0;
}