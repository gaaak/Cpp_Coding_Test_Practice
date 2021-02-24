#include <iostream>
using namespace std;

int n, cnt = 0;
int coinType[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

int main() {
	cin >> n;
	for (int i = 0; i < 8; i++) {
		int coin = coinType[i];
		cnt += n / coin;
		n %= coin;
	}
	cout << cnt;

	return 0;
}
