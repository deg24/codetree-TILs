#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = 2;
	for (int i = 1, cnt = 1; i < (int)s.length(); i++) {
		if (s[i] == s[i - 1]) {
			cnt++;
		}
		if (cnt % 10 == 0) {
			n++;
		}
		if (s[i] != s[i - 1]) {
			n += 2;
			cnt = 1;
		}
	}
	cout << n << "\n";
	cout << s[0];
	for (int i = 1, cnt = 1; i < (int)s.length(); i++) {
		if (i != (int)s.length() - 1) {
			if (s[i] == s[i - 1]) {
				cnt++;
			}
			if (s[i] != s[i - 1]) {
				cout << cnt << s[i];
				cnt = 1;
			}
		}
		if (i == (int)s.length() - 1) {
			if (s[i] == s[i - 1]) {
				cnt++;
				cout << cnt;
			}
			else {
				cout << cnt << s[i] << 1;
			}
		}
	}
	return 0;
}