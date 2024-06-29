#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int map[511][511];
int dist[511][511];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;
	pair<int, int> testP;
	testP = { 1, 2 };

	int num1, num2;
	num1 = testP.first;
	num2 = testP.second;

	cout << num1 << ' ' << num2 << '\n';

	q.push(10);
	q.push(20);
	q.push(30);

	int a;

	a = q.front(); q.pop(); cout << a;
	a = q.front(); q.pop(); cout << a;
	a = q.front(); q.pop(); cout << a;

	cout << map[4][6];



	
}