#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	char a = in[0], b = in[1];
	for (int i = 1; i < in.length(); i++) {
		if (in[i] == b) in[i] = a;
	}

	cout << in;
}