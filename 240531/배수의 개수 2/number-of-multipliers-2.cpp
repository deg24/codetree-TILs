#include <iostream>
using namespace std;

int main() {
	int a[10], cnt{ 0 };
	for (int i{ 0 }; i < 10; i++) {
		cin >> a[i];
	}
	for (int i{ 0 }; i < 10; i++) {
		if (a[i] % 2 == 1) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}