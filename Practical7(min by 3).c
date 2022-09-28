/*Write a menu driven program to find the minimum of three numbers using three different methods as choice
  i)  using if else
  ii) using conditional/ternary operator
  iii)using arithematic operation(subtraction)*/
#include<stdio.h>
int main()
{
	int a,b,c,ch,min;
	printf("\n enter three numbers : ");
	scanf("\n%d%d%d", &a,&b,&c);
	printf("\n 1. find the minimum of three using if else");
	printf("\n 2. find the minimum of three using conditional/ternary operator");
	printf("\n 3. find the minimum of three using arithematic operation(subtraction)");
	printf("\n enter your choice from 1 to 3 : ");
	scanf("\n%d", &ch);
	switch(ch)
	{
	    //using if else
	    case(1):
	    if((a<b) && (a<c))
		{
			min=a;
		}	
		else if((c<a) && (c<b))
		{
			min=c;
		}
		else
		{
			min=b;
		}
		printf("\n minimum of three is %d", min);
		break;
		
		//using conditional/ternary operator
		case(2):
		min = (a<b) ? (a<c?a:c) : (b<c?b:c);
		printf("\n minimum of three is %d", min);
		break;
		
		//using arithematic operation
		case(3):
		if((a-b)>0)
         {
            if((c-b)>0)
               {
                   min=b;
               }
            else
              {
                   min=c;
              }   
         }
        else if((b-c)>0)
         {
            if((a-c)>0)
              {
                   min=c;
              }
            else
              {
                   min=a;
              }
         }
        else
         {
            if((b-a)>0)
              {
                   min=a;
              }
            else
              {
                   min=b;
              }
         }
		printf("\n minimum of three is %d", min);
		break;	  	
		default:printf("\n invalid");
			
	}
	return 0;
	
	
	
}

