#include <iostream>
using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	int i, j, k;
	i = a.size();
	j = b.size();
	k = c.size();
	int max = i, min = i;
	if (j > max) max = j;
	if (k > max) max = k;
	if (j < min) min = j;
	if (k < min) min = k;
	cout << max - min;
	return 0;
}