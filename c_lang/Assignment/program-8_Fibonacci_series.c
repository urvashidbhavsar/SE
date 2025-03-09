#include<stdio.h>
void main(){
	//fibonacci series
	int n1=0;
	int n2=1;
	int n3, i, no;
	printf("\n enter number of element :");
	scanf("%d",&no);
	printf("\n %d %d \t", n1, n2);
	for(i=2;i<no;i++)
	{
		n3 = n1+n2;
		printf("%d \t",n3);
		n1 = n2;
		n2 = n3;
	}
}
