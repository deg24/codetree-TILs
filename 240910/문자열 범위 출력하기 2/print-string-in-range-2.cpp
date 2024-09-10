#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int a;
	cin >> s >> a;
	for (int i = 1, j = s.length(); i <= a; i++) {
		cout << s[j - i];
	}

	return 0;
}