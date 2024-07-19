#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int s = 1;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			s *= i;
		}
		cout << s << "\n";
	}
	
	return 0;
}