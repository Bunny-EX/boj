#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int arr[15];

int main()
{
    int num;

    for (int i = 1; i <= 10; i++)
        cin >> arr[i];


    for (int i = 1; i <= 10; i++)
        arr[i] %= 42;

    int result;
    result = 10;

    for (int i = 1; i <= 10; i++) 
    {
        for (int cur = 1; cur <= 10; cur++)
        {
            if (i == cur)
                break;
            if (arr[i] == arr[cur])
            {
                result--;
                break;
            }
            
        }
    }
            

    cout << result;

    return 0;

}