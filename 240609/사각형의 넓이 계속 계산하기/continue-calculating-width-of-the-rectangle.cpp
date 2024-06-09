#include <iostream>
using namespace std;

int main() {
	int a=1, b=1;
	char c='a';
	while (c != 'C') {
		cin >> a >> b >> c;
		cout << a * b << "\n";
	}
	return 0;
}