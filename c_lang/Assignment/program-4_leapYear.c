#include<stdio.h>
int main()
{
	int year;
	printf("\n enter any year :");
	scanf("%d",&year);
	if(year%4 == 0)
	{
		printf("\n leap year");
	}else
	{
		printf("\n not leap year");
	}
}
