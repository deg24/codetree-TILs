#include <iostream>
using namespace std;

int main() {
	int a[10], cnt{ 0 }, cnt2{ 0 };
	for (int i{ 0 }; i < 10; i++) {
		cin >> a[i];
	}
	for (int i{ 0 }; i < 10; i++) {
		if (a[i] % 3==0) {
			cnt++;
		}
		if (a[i] % 5 == 0) {
			cnt2++;
		}
	}
	cout << cnt << " " << cnt2;
	return 0;
}