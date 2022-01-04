#include<stdio.h>
int main()
{
	int n,i,sum,rem,sq;
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(rem==0)
		sq=1;
		else
		sq=rem*rem;
		sum=sum+sq;
		n=n/10;
	}
	printf("%d",sum);
}