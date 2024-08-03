#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	char c;
	cin >> c;

	bool exist = false;
	for (int i = 0; i < 10; i++) {
		if (arr[i][arr[i].size() - 1] == c) {
			cout << arr[i] << "\n";
			exist = true;
		}
	}

	if (!exist) {
		cout << "None";
	}

	return 0;
}