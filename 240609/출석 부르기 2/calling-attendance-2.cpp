#include <iostream>
using namespace std;

int main() {
	int n;
	while (n >= 1 && n <= 4) {
		cin >> n;
		if (n == 1) cout << "John\n";
		if (n == 2) cout << "Tom\n";
		if (n == 3) cout << "Paul\n";
		if (n == 4) cout << "Sam\n";
		if (n < 1 || n>4) {
			cout << "Vacancy";
			break;
		}
	}
	return 0;
}