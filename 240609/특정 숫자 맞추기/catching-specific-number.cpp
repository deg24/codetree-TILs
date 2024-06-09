#include <iostream>
using namespace std;

int main() {
	int n=0;
	while (n != 25) {
		cin >> n;
		if (n < 25) cout << "Higher\n";
		if (n > 25) cout << "Lower\n";
		if (n == 25) cout << "Good"; break;
	}
	return 0;
}