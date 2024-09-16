#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int n = in.length();
	in = in.substr(1, n - 1) + in.substr(0, 1);
	cout << in;
}