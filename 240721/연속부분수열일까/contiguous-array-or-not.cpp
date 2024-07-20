#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int a[100] = { 0, }, b[100] = { -1, };
	bool res = false;

	int temp;
	if (n1 < n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for (int i = 0; i < n1; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n2; i++) {
		cin >> b[i];
	}

	for (int i = 0, aa = 0, bb = 0; i < n1; i++) {
		if (a[aa] == b[bb]) {
			int cnt = 0;
			for (int j = 0; j < n2 - 1; j++) {
				if (a[aa + j + 1] == b[bb + j + 1]) {
					cnt++;
				}
			}
			if (cnt == n2 - 1) {
				res = true;
				break;
			}
			aa++;
		}
		else {
			aa++;
		}
	}

	if (res) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}