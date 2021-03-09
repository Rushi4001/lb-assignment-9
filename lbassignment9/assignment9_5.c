#include<stdio.h>

void rangerev(int ino1,int ino2)
{
	int icnt=0;
	if (ino1>ino2||ino1<0||ino2<0)
		{
			printf("invalid input\n");
		}
	else
	{
		for(icnt=ino2;(ino1<=icnt)&&(icnt<=ino2);icnt--)
		{
			printf("%d\t",icnt);		
		}
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
	
	rangerev(ivalue1,ivalue2);
	
	
	return 0;
}