#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int temp = to_string(n).length();
	int sum = 0;
	for (int i = 0; temp - i > 0; i++) {
		sum += n % 10;
		n /= 10;
	}
	cout << sum;
}