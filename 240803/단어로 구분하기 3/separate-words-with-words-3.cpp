#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[9 - i] << "\n";
	}

	return 0;
}