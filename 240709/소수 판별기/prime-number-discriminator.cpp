#include <iostream>
using namespace std;

int main() {
	int n, a = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0)a++;
	}
	if (a == 1)cout << "P";
	else cout << "C";
	return 0;
}