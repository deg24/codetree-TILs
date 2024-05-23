#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == 1) {
		if (b >= 19)cout << "WOMAN";
		else cout << "GIRL";
	}
	else if (a == 0) {
		if (b >= 19)cout << "MAN";
		else cout << "BOY";
	}
	return 0;
}