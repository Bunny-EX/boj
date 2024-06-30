#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N;
string str;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> N >> str;
		for (int a = 0; a < str.length(); a++)
			for (int repeat = 0; repeat < N; repeat++)
				cout << str[a];
		cout << '\n';
	}

	return 0;
}