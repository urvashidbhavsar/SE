#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	FILE *fp;
	char ch;
	
	fp = fopen("readData.txt","w");
	
	if(fp == NULL){
		printf("cannot open file");
		exit(1);
	}
	while((ch=getchar()!='\n')){
		fputc(ch,fp);
	}
	fclose(fp);
	
	
}
