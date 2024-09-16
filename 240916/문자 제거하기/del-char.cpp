#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int n, leng = in.length();
	for (int i = 0; i < leng - 1; i++) {
		cin >> n;

		if (in.length() - 1 < n) in.erase(in.length() - 1, 1);
		else in.erase(n, 1);

		cout << in << "\n";
	}
}