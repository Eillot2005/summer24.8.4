#include<iostream>
using namespace std;

int prime[100001];
int psize = 1;

void getprime(int n)
{
	prime[0] = 2;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < psize; j++)
		{
			if (i % prime[j] == 0)break;
			if (j == psize - 1)
				prime[psize++] = i;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	getprime(n);
	for (int i = 0; i < psize; i++)
	{
		int tempprime = n;
		int ans = 0;
		while (tempprime != 0)
		{
			ans += tempprime / prime[i];
			tempprime /= prime[i];
		}
		cout << prime[i] << " " << ans << endl;
	}
}
