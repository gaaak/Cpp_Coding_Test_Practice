#include <iostream>
using namespace std;

int a, b, result = 0;

int main() {
	cin >> a >> b;
	result += abs(a - b) / 10;
	
	int c = abs(a - b) % 10;
	if (c == 1 || c == 5) result += 1;
	if (c == 2 || c == 4 || c == 6 || c == 9) result += 2;
	if (c == 3 || c == 7 || c == 8) result += 3;

	cout << result << endl;
	
	return 0;
}
