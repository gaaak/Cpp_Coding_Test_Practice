#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a[3], b[2];

	for (int i = 0; i < 3; i++) cin >> a[i];
	for (int i = 0; i < 2; i++) cin >> b[i];
	sort(a, a + 3);
	sort(b, b + 2);
	
	cout << fixed << setprecision(1) << (a[0] + b[0]) * 1.1 << endl;

	return 0;
}
