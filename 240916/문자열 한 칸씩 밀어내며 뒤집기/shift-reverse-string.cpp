#include <iostream>
#include <string>
using namespace std;

void Rshift(string& in,int n) {
	in = in.substr(n - 1, 1) + in.substr(0, n - 1);
	cout << in << "\n";
}

void Lshift(string& in, int n) {
	in = in.substr(1, n - 1) + in.substr(0, 1);
	cout << in << "\n";
}

void swap(string& in, int n) {
	char temp;
	for (int i = 0; i < n/2; i++) {
		temp = in[i];
		in[i] = in[n - i - 1];
		in[n - i - 1] = temp;
	}
	cout << in << "\n";
}

int main() {
	string in;
	cin >> in;

	int cnt;
	cin >> cnt;

	int temp;
	int n = in.length();
	while (cnt != 0) {
		cin >> temp;

		switch (temp)
		{
		case 1:
			Lshift(in, n);
			cnt--;
			break;
		case 2:
			Rshift(in, n);
			cnt--;
			break;
		case 3:
			swap(in, n);
			cnt--;
			break;
		default:
			break;
		}
	}
}