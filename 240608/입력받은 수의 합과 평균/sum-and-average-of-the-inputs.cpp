#include <iostream>
using namespace std;

int main() {
	int a, s;
	double n[100];
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