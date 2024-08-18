#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str[20];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	char ch;
	cin >> ch;
	int cnt = 0;
	double sum = 0;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < n; i++) {
		if (str[i][0] == ch) {
			cnt++;
			sum += str[i].size();
		}
	}
	cout << cnt << " " << sum / cnt;

	return 0;
}