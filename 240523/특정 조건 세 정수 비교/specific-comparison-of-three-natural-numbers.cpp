#include <iostream>
using namespace std;

int main() {
	int a, b, c, m;
	cin >> a >> b >> c;
	m = min(a, b);
	m = min(c, m);
	if (a == m) cout << "1 ";
	else cout << "0 ";
	if (a == b && b == c) cout << "1 ";
	else cout << "0";
	return 0;
}