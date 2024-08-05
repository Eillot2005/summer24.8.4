//luogu P5736 【深基7.例2】质数筛
#include<iostream>//123456789
using namespace std;
int arr[100001];
int prime[100000];
bool isprime[100001] = {false};
int main()
{
	int n;
	cin >> n;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)max = arr[i];
	}
	prime[0] = 2;
	isprime[2] = true;
	int size = 1;
	for (int i = 2; i <= max; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i % prime[j] == 0)break;
			if (j == size - 1)
			{
				prime[size++] = i;
				isprime[i] = true;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (isprime[arr[i]] == true)cout << arr[i] << " ";
	}
}