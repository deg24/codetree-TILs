#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k, a[1000];
	cin >> n >> k;
	for (int i{ 0 }; i < n; i++) cin >> a[i];
	sort(a, a + n);
	cout << a[k-1];
	return 0;
}