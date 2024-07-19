#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		cin >> a;
		for (int j = 0; a != 1; cnt++) {
			if (a % 2 == 0) a /= 2;
			else a = a * 3 + 1;
		}
		cout << cnt << "\n";
	}
	
	return 0;
}