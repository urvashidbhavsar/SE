// sum of given numbers digit.
#include<stdio.h>
void main(){
	int num,t,sum=0,rem;
	printf("\n Enter number :");
	scanf("%d",&num);
	
	while(num!=0){
		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}
	printf("Sum of digits : %d",sum);
}

