#include<stdio.h>

int range(int istart,int iend)
{
	int icnt=0;

	if(istart<0||iend<0||istart>iend)
	{
		printf("invalid input\n");
	}
	else
	{
		int sum=0;
	for (icnt=istart;(istart<=icnt)&&(icnt<=iend);icnt++)
		{
			sum=sum+icnt;
			
		}
	return sum;
	}

}
	
int main()
{
	int ivalue1=0,ivalue2=0;
	int iret=0;
	printf("enter first number\n");
	scanf("%d",&ivalue1);
	printf("enter second number\n");
	scanf("%d",&ivalue2);
	
	iret=range(ivalue1,ivalue2);
	printf("addition of range is:%d\n",iret);
	
	
	return 0;
}