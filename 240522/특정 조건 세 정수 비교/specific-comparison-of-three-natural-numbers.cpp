#include <iostream>
using namespace std;

int main() {
	int a, b, c, min;
	cin >> a >> b >> c;
	min = b;
	if (b > c)min = c;
	else min = b;
	if (a == min) cout << "1 ";
	else cout << "0 ";
	if (a == b && a == c) cout << "1";
	else cout << "0 ";
	return 0;
}