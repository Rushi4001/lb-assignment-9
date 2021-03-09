#include<stdio.h>

int rangeeven(int istart,int iend)
{
	int icnt=0;
	int sum=0;
	if(istart>iend||istart<0||iend<0)
	{
		printf("invalid input\n");
	}
	else
	{
		for(icnt=istart;((istart<=icnt)&&(icnt<=iend));icnt++)
		{
			if(icnt%2==0)
			{
				sum=sum+icnt;
			}
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
	
	iret=rangeeven(ivalue1,ivalue2);
	printf("addition of range is:%d\n",iret);
	
	
	return 0;
}