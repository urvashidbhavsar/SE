#include<stdio.h>
int main(){
	int s1, s2, s3, s4, s5, total, per;
	printf("\n enter 1st subject marks : ");
	scanf("%d",&s1);
	printf("\n enter 2nd subject marks : ");
	scanf("%d",&s2);
	printf("\n enter 3rd subject marks : ");
	scanf("%d",&s3);
	printf("\n enter 4th subject marks : ");
	scanf("%d",&s4);
	printf("\n enter 5th subject marks : ");
	scanf("%d",&s5);
	
	total = s1 + s2 + s3 + s4 + s5;
	printf("\n Total marks is %d from 500",total);
	
	per = total*100/500;
	printf("\n percentage is : %d ",per);
	
	if(per>75){
		printf("\n Distinction");
	}else if(per <= 75 && per > 60){
		printf("\n First class");
	}else if(per <= 60 && per > 50){
		printf("\n second class");
	}else if(per <= 50 && per > 35){
		printf("\n pass class");
	}else{
		printf("\n fail");
	}
}
