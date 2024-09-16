#include <iostream>
#include <string>
using namespace std;

void Rshift(string& in,int n) {
	in = in.substr(n - 1, 1) + in.substr(0, n - 1);
}

void Lshift(string& in, int n) {
	in = in.substr(1, n - 1) + in.substr(0, 1);
}

int main() {
	string in;
	cin >> in;

	string temp;
	cin >> temp;

	int n = in.length();
	for (int i = 0; i < temp.length(); i++) {
		switch (temp[i])
		{
		case 'L':
			Lshift(in, n);
			break;
		case 'R':
			Rshift(in, n);
			break;
		default:
			break;
		}
	}

	cout << in;
}