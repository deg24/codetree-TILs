#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n{ 0 }, a[100];
	cin >> n;
	for (int i{ 0 }; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (int i{ 0 }; i < n; i++)cout << a[i] << " ";
	cout << "\n";
	sort(a, a + n, greater<int>());
	for (int i{ 0 }; i < n; i++)cout << a[i] << " ";
	return 0;
}