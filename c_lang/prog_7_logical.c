#include<stdio.h>
void main(){
	int a=5, b=10,res;
	
	res = (a<b && a==b);
	printf("\n result is : %d",res);
	
	res = (a<b || a==b);
	printf("\n result is : %d",res);
	
	res = !(a<b && a==b);
	printf("\n result is : %d",res);
}
