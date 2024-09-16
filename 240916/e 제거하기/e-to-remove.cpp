#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	for (int i = 0; i < in.length(); i++) {
		if (in[i] == 'e') {
			in.erase(i, 1);
			break;
		}
	}

	cout << in;
}