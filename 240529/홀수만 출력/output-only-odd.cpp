#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for (int i{ a }; a <= b; a += 2) {
		cout << a << " ";
	}
	return 0;
}