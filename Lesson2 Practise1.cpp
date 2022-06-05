#include<stdio.h>
#include<string.h>
using namespace std;
typedef long long a;
struct node 
{
	a p,num,id;
}x[10005];
a slove(a n,a s)
{
	a ans=x[0].p*x[0].num,kase=0;	
	for(a i=1;i<n;++i)
	{
		a q=x[kase].p+s*(i-x[kase].id),cur=x[i].p;
		if(q<cur)
		{
			ans+=q*x[i].num; 
		}
		else
		{
			ans+=cur*x[i].num;
			kase=i;
		}
	}
	return ans;
}
int main()
{
	a n,s;
	while(~scanf("%lld%lld",&n,&s))
	{
		for(a i=0;i<n;++i)
		{
			scanf("%lld%lld",&x[i].p,&x[i].num);
			x[i].id=i;
		}
		printf("%lld\n",slove(n,s));
	}
	return 0;
} 

