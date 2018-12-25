#include<stdio.h>
int main()
{
	int N,a,b,tmp = 0,tmpa = 0,tmpb = 0,ca, cb;
	scanf("%d%d%d",&N,&a,&b);
	for (int i = 1;i <= (N+1);i++) 
	{
		if ((i <= tmpa + a)) ca = i - tmpa;
		else
		{
			tmpa = tmpa + a;
			ca = i - tmpa;
		}
		
		if ((i <= tmpb + b)) cb = i - tmpb;
		else
		{
			tmpb = tmpb + b;
			cb = i - tmpb;
		}

		if (ca == cb) tmp ++;
	}
	printf("%d",tmp);
	return 0;
} 

/*RabbieW's
#include <iostream>
using namespace std;
int main ()
{
	int i,a1,a2,n,a,b,x=0;
	cin >> n >> a1 >> a2;
	for (i = 1;i <= n;i++)
	{
		if (i % a1 == 0) a = a1;
		else a = i % a1;
		if (i % a2 == 0) b = a2;
		else b = i % a2;
		if (a == b) x++;
	}
	cout << x;
}*/
