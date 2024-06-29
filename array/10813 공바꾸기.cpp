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

    cin >> N >> M;

    for (int boll = 1; boll <= N; boll++)
        arr[boll] = boll;

    int i, j, num;

    for (int re = 1; re <= M; re++)
    {
        cin >> i >> j;
        num = arr[i];
        arr[i] = arr[j];
        arr[j] = num;
    }

    for (int re = 1; re <= N; re++)
        cout << arr[re] << " ";


    return 0;

}