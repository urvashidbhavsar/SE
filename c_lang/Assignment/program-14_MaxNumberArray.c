#include<stdio.h>

void main(){
	double num[100];
	int n,i;
	printf("\n Enter the number of elements (1 to 100) :");
	scanf("%d",&n);
	
	for(i=0; i<n; ++i){
		printf("Enter Number %d :", i+1);
		scanf("%lf",&num[i]);
	}

	for(i=1;i<n;++i){
		if(num[0]<num[i]){
			num[0] = num[i];
		}
	}
	printf("Largest element = %.2lf",num[0]);
}


