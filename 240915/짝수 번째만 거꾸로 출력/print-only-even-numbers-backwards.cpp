#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;
	
	int n = (int)in.length();
	string even = "";

	for (int i = n - 1; i >= 0; i--) {
		if (i % 2 == 1) {
			even += in[i];
		}
	}

	cout << even;
}