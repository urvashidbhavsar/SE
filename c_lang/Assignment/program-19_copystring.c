// Write a program to copy string from one string to another string with user define function.
 
#include<stdio.h>
void mystrcpy(char str2[30], char str1[30]);

int main()
{
 char str1[30], str2[30];
 int i;

 printf("\n Enter string 1 :\n");
 gets(str1);
 
 mystrcpy(str2, str1);
 
 printf("\n Copied string in another is : %s", str2);
 
 return 0;
}
void mystrcpy(char str2[30], char str1[30])
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}
