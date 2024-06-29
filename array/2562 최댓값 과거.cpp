#include <iostream>
using namespace std;
int main() 
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	int arr[10];
	for(int i = 1; i<10; i++){
		cin>>arr[i];
	}
	int maxint, su;
	su=1;
	maxint=arr[1];
	for(int i = 2; i<10; i++)
	{

		if(maxint<arr[i])
		{
			maxint=arr[i];
			su=i;
		}
	}
	cout<<maxint<<'\n';
	cout<<su<<'\n';

	return 0;
}