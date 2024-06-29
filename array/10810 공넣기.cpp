#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int arr[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int N, M;
    int i, j, k;


    cin >> N >> M;

    for (int re = 1; re <= M; re++)
    {
        cin >> i >> j >> k;

        for (int repeat = i; repeat <= j; repeat++)
            arr[repeat] = k;
    }

    for (int re = 1; re <= N; re++)
        cout << arr[re] << " ";


    return 0;

}