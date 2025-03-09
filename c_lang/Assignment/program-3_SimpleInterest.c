#include<stdio.h>
int main(){
	int prin, rate, year, si;
	printf("\n Enter Principle amount : ");
	scanf("%d",&prin);
	printf("\n Enter Rate : ");
	scanf("%d",&rate);
	printf("\n Enter no of year : ");
	scanf("%d",&year);
	
	si = prin*rate*year/100;
	
	printf("\n Simple interest is : %d",si);
}
