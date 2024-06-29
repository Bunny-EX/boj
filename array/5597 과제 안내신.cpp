#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int arr[101];

int main()
{
    int n, numnum;
    
    for (int num = 1; num <= 30; num++)
        arr[num] = num;
        
    for (int jull = 1; jull <= 28; jull++)
    {
        cin >> numnum;
        if (arr[numnum] == numnum)
            arr[numnum] = 0;
    }

    n = 1;

    while (n <= 30)
    {
        if (arr[n] != 0)
            cout << arr[n] <<'\n';
        n++;
    }


    return 0;

}