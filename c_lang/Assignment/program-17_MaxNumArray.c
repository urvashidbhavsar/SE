#include<stdio.h>

void main(){
	int i;
	int arr[5];
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("\n Array elements are : \n");
	for(i=0;i<5;i++){
		printf("\n Element of [%d] : ",i);
		scanf("%d",&arr[i]);
}
	//initialize with first element.
	int max = arr[0];
	for(i=0;i<len;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("\n large Number is : %d",max);
}

