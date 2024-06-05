#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	cin >> a >> b;
	if (b > a) {
		temp = b;
		b = a;
		a = temp;
	}
	temp = 0;
	for (int i = a; i <= b; i++) {
		if (i % 5 == 0) {
			temp += i;
		}
	}
	cout << temp;
	return 0;
}