#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N;
char arr[1001];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> arr;
	cin >> N;
	cout << arr[N-1];

	return 0;
}