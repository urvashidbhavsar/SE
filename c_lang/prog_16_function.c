#include<stdio.h>
void main(){
	myfunction();
	sum(34,54);
}

void myfunction(){
	printf("Hello world!!!!");
}
void sum(int a,int b){
	int res = a + b;
	printf("Sum is : %d", res);
}
