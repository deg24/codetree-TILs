#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string in[10];
	for (int i = 0; i < n; i++) {
		cin >> in[i];
	}

	string res;
	for (int i = 0; i < n; i++) {
		res += in[i];
	}

	n = (int)res.length();
	for (int i = 0; i < n; i++) {
		cout << res[i];
		if (i % 5 == 4) cout << '\n';
	}
}