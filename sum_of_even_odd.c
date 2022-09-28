//Wap to find the sum of even and odd numbers between 100
#include<stdio.h>
int main()
{
	int i,sum1=0,sum2=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
          {
          	sum1=sum1+i;
		  }		
		else
		  {
		  	sum2=sum2+i;
		  }  
	}
	printf("sum of even numbers is %d", sum1);
	printf("sum of odd numbers is %d", sum2);
}
