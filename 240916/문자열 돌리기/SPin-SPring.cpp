#include <iostream>
#include <string>
using namespace std;

void Rshift(string& in,int n) {
	in = in.substr(n - 1, 1) + in.substr(0, n - 1);
	cout << in << "\n";
}

int main() {
	string in;
	cin >> in;

	cout << in << "\n";
	int n = in.length();
	for (int i = 0; i < n; i++) {
		Rshift(in, n);
	}
}