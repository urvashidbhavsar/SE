// display print the number in reverse order.

#include<stdio.h>
void main(){
	int num, r, sum=0,t;
	printf("\n Enter number :");
	scanf("%d",&num);
	
	for(t=num; num!=0; num=num/10){
		r = num % 10;
		sum = sum *10 + r;
	}
	printf("the number in reverse order : %d",sum);
	
}
