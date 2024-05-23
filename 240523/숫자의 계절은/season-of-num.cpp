#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a == 12)cout << "Winter";
	else if (a >= 9)cout << "Fall";
	else if (a >= 6)cout << "Summer";
	else if (a >= 3)cout << "Spring";
	else cout << "Winter";
	return 0;
}