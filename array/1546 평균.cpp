#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N;
int arr[1005];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	
	
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	float top = arr[1];

	for(int i = 2; i <= N; i++)
		if (arr[i] > top)
			top = arr[i];



	float total;
	total = 0;

	for (int i = 1; i <= N; i++)
		total = total + ((arr[i] / top)*100);

	cout << total / N ;

	return 0;
}