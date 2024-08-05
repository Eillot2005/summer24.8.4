//luogu P3383 【模板】线性筛素数
#include<iostream>
using namespace std;
typedef long long ll;
int prime[100000000];
int notprime[100000000];
int Psize = 0;

void getPrime(ll n)
{
	for (ll i = 2; i <= n; i++)
	{
		if (notprime[i])continue;
		for (ll j = i; j <= n / i; j++)
		{
			notprime[i * j] = 1;
		}
		if (!notprime[i])
			prime[Psize++] = i;
	}
}

int main()
{
	ll n, p;
	scanf_s("%lld %lld", &n, &p);
	getPrime(n);
	for (int i = 0; i < p; i++)
	{
		int s;
		scanf_s("%d", &s);
		printf("%d\n", prime[s - 1]);
	}
}
