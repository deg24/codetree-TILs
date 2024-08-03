#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[i].size();
	}

	return 0;
}