//Wap to find whether a givem number is armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,org,res,r,a;
	printf("\n enter the number:");
	scanf("%d", &n);
	org=n;
	while(n>0)
	{
		r=n%10;
		a=pow(r,3);
		res=res+a;
		n=n/10;
	}
	if(res==org)
	{
		printf("\n number is armstrong ");
	}
	else
	{
		printf("\n number is not armstrong ");
	}
	return 0;
}
