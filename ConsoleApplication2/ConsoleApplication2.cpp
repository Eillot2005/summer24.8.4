//luogu P1029 [NOIP2001 普及组] 最大公约数和最小公倍数问题
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int x, y;
	cin >> x >> y;
	long long l = x * y;
	int sum = 0;
	for (int i = x; i * i <= l; i++)
	{
		if (l % i == 0 && gcd(i, l / i) == x)sum += 2;
	}
	if (x == y)sum--;
	cout << sum;
}
