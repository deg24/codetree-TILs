#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int n = in.length();
	int res1 = 0;
	for (int i = 0; i < n - 1; i++) {
		if (in[i] == 'e' && in[i + 1] == 'e') {
			res1++;
		}
	}

	int res2 = 0;
	for (int i = 0; i < n - 1; i++) {
		if (in[i] == 'e' && in[i + 1] == 'b') {
			res2++;
		}
	}

	cout << res1
		<< " " << res2;
}