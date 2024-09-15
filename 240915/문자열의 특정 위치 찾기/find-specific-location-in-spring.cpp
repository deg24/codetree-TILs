#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	char c;

	cin >> in >> c;
	int n = in.length();
	int idx = -1;
	for (int i = 0; i < n - 1; i++) {
		if (in[i] == c) {
			idx = i;
		}
	}

	if (idx != -1) cout << idx;
	else cout << "No";
}