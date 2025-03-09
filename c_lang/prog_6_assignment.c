#include<stdio.h>
void main(){
	int a=10, b=12;
	
	a+=b;
	printf("\n add and assign : %d", a);
	
	a-=b;
	printf("\n Subtract and assign : %d", a);
	
	a*=b;
	printf("\n multiply and assign : %d", a);
	
	a/=b;
	printf("\n division and assign : %d", a);
	
	a%=b;
	printf("\n module and assign : %d", a);
	
}
