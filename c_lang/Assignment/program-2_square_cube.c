#include<stdio.h>
void main(){
	int x;
	printf ("\n Number \t Square \t Cube");
	printf("\n==============================================");
	for(x = 1; x <= 10; x++)
	{
		printf("\n %d \t\t %d \t\t %d", x, x*x, x*x*x);
	}
}
