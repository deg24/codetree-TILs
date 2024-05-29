#include <iostream>
using namespace std;

int main() {
	int a, b, c, max, min, mid;
	cin >> a >> b >> c;
	max = a;
	min = a;
	if (b > max)max = b;
	if (c > max)max = c;
	if (b < min)min = b;
	if (c < min)min = c;
	if (a != max && a != min) cout << a;
	if (b != max && b != min) cout << b;
	if (c != max && c != min) cout << c;

	
	return 0;
}