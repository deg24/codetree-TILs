#include <iostream>
using namespace std;

int main() {
	char a, b, c, A;
	int aa, bb, cc;
	cin >> a >> aa >> b >> bb >> c >> cc;
	if (a == 'Y' && aa >= 37) A++;
	if (b == 'Y' && bb >= 37) A++;
	if (c == 'Y' && cc >= 37) A++;
	if (A >= 2) cout << "E";
	else cout << "N";

	return 0;
}