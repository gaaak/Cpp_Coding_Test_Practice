#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Compare(int a, int b);
int n, d_price, t_price, d_cal;
double tempCal, Maxcal;
vector<int> toping;

int main() {
	cin >> n;
	cin >> d_price >> t_price;
	cin >> d_cal;

	int total = d_cal;
	
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		toping.push_back(x);
	}

	sort(toping.begin(), toping.end(), Compare);

	Maxcal = (double)d_cal / d_price;

	for (int i = 0; i < toping.size(); i++) {
		total += toping[i];
		tempCal = (double)total / (d_price + t_price * (i + 1));
		if (Maxcal < tempCal) {
			Maxcal = tempCal;
		}
	}
	cout << (int)Maxcal;
	return 0;
}

int Compare(int a, int b) {
	return a > b;
}

//매우 
