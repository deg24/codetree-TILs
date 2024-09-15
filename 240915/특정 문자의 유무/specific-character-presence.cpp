#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int n = in.length();
	bool res1 = false;
	for (int i = 0; i < n - 1; i++) {
		if (in[i] == 'e' && in[i + 1] == 'e') {
			res1 = true;
		}
	}

	bool res2 = false;
	for (int i = 0; i < n - 1; i++) {
		if (in[i] == 'a' && in[i + 1] == 'b') {
			res2 = true;
		}
	}

	if (res1) cout << "Yes ";
	else cout << "NO ";

	if (res2) cout << "Yes";
	else cout << "No";
}