#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int A[10002];
    int N, X, a;

    cin >> N >> X;

    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        A[i] = a;
    }

    for (int i = 1; i <= N; i++)
    {
        if (A[i] < X)
        {
            cout << A[i] << " ";
        }
    }

    return 0;

}