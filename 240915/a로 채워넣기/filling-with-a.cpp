#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int n = in.length();
	in[1] = 'a';
	in[n - 2] = 'a';
	cout << in;
}