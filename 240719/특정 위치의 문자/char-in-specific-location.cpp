#include <iostream>
using namespace std;

int main() {
	char c[6] = { 'L', 'E', 'B', 'R', 'O', 'S' }, ch;
	cin >> ch;
	int n = 0;
	
	for (int i = 0; i < 6; i++) {
		if (ch == c[i]) {
			cout << i;
			n++;
			break;
		}
	}

	if (n == 0) cout << "None";

	return 0;
}