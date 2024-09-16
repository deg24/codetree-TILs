#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int n = in.length();
	char a = in[0], b = in[1];
	for (int i = 0; i < n; i++) {
		if (in[i] == a) in[i] = b;
		else if (in[i] == b) in[i] = a;
	}

	cout << in;
}