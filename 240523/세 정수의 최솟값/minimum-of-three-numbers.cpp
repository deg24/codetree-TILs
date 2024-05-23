#include <iostream>
using namespace std;

int main() {
	int a, b, c, m;
	cin >> a >> b >> c;
	m = a;
	m = m < b ? m : b;
	m = m < c ? m : c;
	cout << m;
	return 0;
}