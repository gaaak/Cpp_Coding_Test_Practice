#include <iostream>
using namespace std;

int n, k;
int result;

int main() {
	cin >> n >> k;
	
	while (1) {
		int target = (n / k) * k;
		result += (n - target);
		n = target;
		if (n < k) break;
		result += 1;
		n /= k;
	}
	result += (n - 1);
	cout << result << endl;

	return 0;
}
