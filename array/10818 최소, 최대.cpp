#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N, one;
int arr[1000003];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> one;
        arr[i] = one;
    }

    int max, min;

    max = 1000001;
    min = -1000001;

    for (int i = 1; i <= N; i++)
    {
        if (arr[i] > min)
            min = arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (arr[i] < max)
            max = arr[i];
    }

    cout << max << " " << min;

    return 0;

}