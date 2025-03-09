#include<stdio.h>

void main(){
	int a=1;
	
	while(a<=5){
		printf("%d \t",a);
		a++;
	}
	printf("\n");
	
	int b=1;
	do{
		printf("%d \t",b);
		b++;
	}while(b<=5);
	printf("\n");
	
	int c=1;
	for(c=1; c<=10;c++){
		printf("%d \t",c);
	}
}
