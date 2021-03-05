#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input_data;
	int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

	cin >> input_data;
	int row = input_data[1] - '0';
	int col = input_data[0] - 'a' + 1;
	
	int result = 0;
	for (int i = 0; i < 8; i++)
	{
		int next_row = row + dx[i];
		int next_col = col + dy[i];
		if (next_row >= 1 && next_row <= 8 && next_col >= 1 && next_col <= 8)
			result += 1;
	}

	cout << result << "\n";

	return 0;
}
