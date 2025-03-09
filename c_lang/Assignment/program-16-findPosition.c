#include<stdio.h>
void main(){
	int n,i,key;
	int num[]={5,7,8,9,10};
	double length = sizeof(num)/sizeof(num[0]);
	
	printf("Elements of given array ------------------- \n");
	
	for(i=0; i<length; ++i)
	{
		printf("%d \t",num[i]);
	}
	printf("\n enter the key : ");
	scanf("%d",&key);
	for(i=0;i<length;i++){
		if(num[i]==key){
			printf("Position is %d",key);
			return 0;
		}
		printf("\n element not found");	
	}	
}
