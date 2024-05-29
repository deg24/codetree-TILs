#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i{ a }; i <= 100; i++) {
		if (a >= 90) cout << "A ";
		else if (a >= 80) cout << "B ";
		else if (a >= 70) cout << "C ";
		else if (a >= 60) cout << "D ";
		else cout << "F ";
	}
	return 0;
}