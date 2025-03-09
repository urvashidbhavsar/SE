#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	FILE *fp;
	char ch;
	int i=0, sum=0;
	fp = fopen("readData.txt","r");
	
	if(fp == NULL){
		printf("can not open a file");
		exit(1);
	}
	
	while((ch=fgetc(fp))!= EOF){
		printf("%c",ch);
	}
	fclose(fp);
}
