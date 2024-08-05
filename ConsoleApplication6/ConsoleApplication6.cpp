//洛谷P1045 [NOIP2003 普及组] 麦森数 
//高精度快速幂
#include<iostream>
using namespace std;
int a[1000], b[1000];
void mul(int* a, int* b,int* c)
{
	int t[1000];
	memset(t, 0, sizeof(t));
	for (int i = 0; i < 500; i++)
	{
		for (int j = 0; j < 500; j++)
		{
			t[i + j] += a[i] * b[j];
			t[i + j + 1] += t[i + j] / 10;
			t[i + j] %= 10;
		}
	}
	memcpy(c, t, sizeof(t));
}
void quickpow(int p)
{
	a[0] = 2;
	b[0] = 1;
	while (p)
	{
		if (p & 1)mul(b,a,b);
		mul(a,a,a);
		p >>= 1;
	}
	b[0]--;
}

int main()
{
	int p;
	cin >> p;
	cout << (int)(log10(2) * p) + 1 << endl;
	quickpow(p);
	for (int i = 0, k = 499; i < 10; i++)
	{
		for (int j = 0; j < 50; j++, k--)
		{
			cout << b[k];
		}
		cout << endl;
	}
}