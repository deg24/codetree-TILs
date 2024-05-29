#include <iostream>
using namespace std;

int main() {
	int n, i{ 1 };
	cin >> n;
	while (i*3<n) {
		i++;
		cout << i*3 << " ";
	}
	return 0;
}