#include <iostream>
#include <string>
using namespace std;

string RLE(string);

int main() {
	string input;
	cin >> input;

	string encoded = RLE(input);
	cout << encoded.length()
		<< "\n" << encoded;
}

string RLE(string input){
	string encoded = "";
	int n = (int)input.length();

	for (int i = 0; i < n; i++) {
		int cnt = 1;

		while (i < n - 1 && input[i] == input[i + 1]) {
			cnt++;
			i++;
		}

		encoded += input[i];
		encoded += to_string(cnt);
	}

	return encoded;
}