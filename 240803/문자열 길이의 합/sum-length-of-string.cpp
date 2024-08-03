#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr[10];
	int n;
	cin >> n;

	int sum = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i].size();
		if (arr[i][0] == 'a') cnt++;
	}
	
	cout << sum << " " << cnt;
	return 0;
}