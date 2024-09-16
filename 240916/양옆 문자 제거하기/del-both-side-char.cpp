#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	in.erase(1, 1);
	in.erase(in.length() - 2, 1);
	cout << in;
}