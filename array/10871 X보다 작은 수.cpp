#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, a;
    int arr[110];

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        arr[i] = a;
    }

    int v, same;

    cin >> v;
    same = 0;

    for (int i = 1; i <= N; i++)
    {
        if (arr[i] == v)
            same++;
    }

    cout << same;

    return 0;

}