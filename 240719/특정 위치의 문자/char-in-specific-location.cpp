#include <iostream>
using namespace std;

int main() {
	char c[6] = { 'L', 'E', 'B', 'R', 'O', 'S' }, ch;
	cin >> ch;
	
	for (int i = 0; i < 6; i++) {
		if (ch == c[i]) {
			cout << i;
			break;
		}
		else if (i == 6) {
			cout << "None";
		}
	}

	return 0;
}