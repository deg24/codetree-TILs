#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ar[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> ar[i];
		sum += ar[i];
	}
	string temp = to_string(sum);
	char tem = temp[0];
	for (int i = 0; i < temp.length() - 1; i++) {
		temp[i] = temp[i + 1];
		if (i + 2 == temp.length()) {
			temp[i + 1] = tem;
		}
	}
	cout << temp;
}