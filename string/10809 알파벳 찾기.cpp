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

	int answer['z'+1];

	cin >> str;

	for (int i = 0; i <= 'z'; i++)
		answer[i] = -1;

	for (int ascii = 'a'; ascii <= 'z'; ascii++)
		for (int i = 0; i < str.length(); i++)
			if (str[i] == ascii && answer[ascii] == -1)
			 	answer[ascii] = i;

	for (int i = 'a'; i <= 'z'; i++)
		cout << answer[i] << ' ';

	return 0;
}