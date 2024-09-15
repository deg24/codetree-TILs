#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	string parts;
	cin >> parts;

	int i = in.length();
	int p = parts.length();
	int idx = -1;
	for (int i = 0; i < i - p + 1; i++) {
		bool all = true;
		for (int j = 0; j < p; i++) {
			if (in[i] != parts[j]) {
				all = false;
			}
		}
		if (all) idx = i;
	}

	cout << idx;
}