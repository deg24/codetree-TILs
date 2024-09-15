#include <iostream>
#include <string>
using namespace std;

string compare(string, string);

int main() {
	string in1, in2;
	cin >> in1 >> in2;

	cout << compare(in1, in2);
}

string compare(string in1, string in2) {
	string ab = "", ba = "";
	ab = in1 + in2;
	ba = in2 + in1;

	int n = (int)in1.length() + (int)in2.length();
	bool res = true;
	for (int i = 0; i < n; i++) {
		if (ab[i] != ba[i]) res = false;
	}

	if (res) return "true";
	else return "false";
}