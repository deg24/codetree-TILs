#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(21);
	int c;
	c = (double)a / b;
	cout << floor(c);
	return 0;
}