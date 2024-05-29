#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(21);
	cout << (double)a / b;
	return 0;
}