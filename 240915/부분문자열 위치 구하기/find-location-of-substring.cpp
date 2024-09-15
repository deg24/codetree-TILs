#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	string parts;
	cin >> parts;

	int a = in.length();
	int b = parts.length();
	int idx = -1;
	for (int i = 0; i < a - b + 1; i++) {
		bool all = true;
		for (int j = 0; j < b; j++) {
			if (in[i + j] != parts[j]) {
				all = false;
			}
		}
		if (all) {
			idx = i;
			break;
		}
	}

	cout << idx;
}