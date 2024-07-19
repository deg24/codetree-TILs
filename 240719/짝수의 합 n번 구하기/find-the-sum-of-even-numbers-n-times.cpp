#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		int s = 0;
		for (int j = a; j <= b; j++) {
			if (j % 2 == 0) s += j;
		}
		cout << s << "\n";
	}
	
	return 0;
}