//#include<stdio.h>
//using namespace std;
//int main()
//{
//    int n, s = 0;
//    scanf_s("%d", &n);
//    while (n)
//    {
//        s = s * 10 + n % 10;
//        n /= 10;
//    }
//	printf("%d", s);
//    return 0;
//}

#include<stdio.h>
using namespace std;
typedef long long ll;
int main()
{
	int N, t = 1, ans = 0;//N是输入的个数，t是连续上升天数，ans是最大的连续上升天数。
	ll m = 0, n;//m是前一个数，n是当前数。
	scanf_s("%lld", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lld", &n);//输入m和n。
		if (n > m)
		{
			t++;//如果比前一个大，t++。
			if (t > ans)
				ans = t;//把最大的连续上升天数放在ans里。
		}
		else
			t = 1;//否则重新计数
		m = n;//n变成下一组输入的前一个数
	}
	printf("%lld", ans);//输出答案ans。
	return 0;
}