#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	cin >> in;

	int cnt;
	cin >> cnt;

	while (cnt != 0) {

		int n;
		cin >> n;

		switch (n)
		{
		case 1:
			char temp;
			int a, b;
			cin >> a >> b;

			temp = in[a - 1];
			in[a - 1] = in[b - 1];
			in[b - 1] = temp;

			cout << in << "\n";
			cnt--;
			break;
		case 2:
			char aa, bb;
			cin >> aa >> bb;
			for (int i = 0; i < in.length(); i++) {
				if (in[i] == aa) in[i] = bb;
			}
			cout << in << "\n";
			cnt--;
			break;
		default:
			break;
		}
	}
}