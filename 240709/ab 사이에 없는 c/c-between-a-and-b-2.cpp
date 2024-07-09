#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	bool res = true;
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			res = false;
		}
	}
	if (res) cout << "YES";
	else cout << "NO";
	return 0;
}