#include <iostream>
using namespace std;

int main() {
	int a;
	double n[100], s = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> n[i];
		s += n[i];
	}
	cout << fixed;
	cout.precision(1);
	cout << s << " " << s / a;
	return 0;
}