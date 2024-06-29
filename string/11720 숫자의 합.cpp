#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N;
string str;

int main()
{
	// cin.tie(NULL);
	// ios::sync_with_stdio(false);


	cin >> N;
	cin >> str;

	int total;
	total = 0;

	for (int i = 0; i < N; i++)
		total += (int)str[i] - '0';
	cout << total;

	return 0;
}