#include<stdio.h>
void main(){
		int i,j,n,num=1;
	printf("\n Enter number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d \t",num);
			++num;
		}
		printf("\n");
	}
}
