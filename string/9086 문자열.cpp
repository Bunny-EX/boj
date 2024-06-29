#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int T;
string arr;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> T;

	int len;

	for(int i=1; i<=T; i++)
	{
		cin >> arr;
		len = arr.length();
		cout << arr[0];
		cout << arr[len-1] << '\n';
	}

	return 0;
}