//杭电2973 YAPTCHA
#include<iostream>
using namespace std;
int prime[3000000];
int notprime[3000000];
int need[1000000];
int sum = 0;
int psize = 1;
void getprime()
{
	for (long long i = 2; i <= 3000000; i++)
	{
		if (notprime[i])continue;
		for (long long j = i*i; j <= 3000000; j+=i)
			notprime[j] = 1;
		if ((i - 7) % 3 == 0 && i != 7)
			prime[(i-7)/3] = 1;
	}
}
int main()
{
	int t;
	cin >> t;
	getprime();
	for (long long k = 2; k <= 1000000; k++)
		need[k] = need[k - 1] + prime[k];
	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		int n;
		cin >> n;
		cout << need[n] << endl;
	}
}
