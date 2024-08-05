#include<iostream>
using namespace std;
typedef long long ll;
ll power(ll a,ll b,ll p)
{
	if (a == 1 || b == 0)return 1;
	return b % 2 == 1 ? a * power(a * a % p, b / 2, p) % p : power(a * a % p, b / 2, p) % p;
}
int main()
{
	ll a, b, p;
	cin >> a >> b >> p;
	cout << a << "^" << b << " mod " << p << "=" << power(a, b, p);
}