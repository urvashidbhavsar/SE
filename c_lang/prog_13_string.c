#include<stdio.h>
void main(){
	char greetings[] = "Hello World!";
	printf("%s", greetings);
	printf("\n%c", greetings[0]);
	
	greetings[0] = 'J';
	printf("\n%s", greetings);
	printf("\n");
	
	char carName[] = "Toyota";
	int i;
	
	for (i = 0; i < 6; ++i) {
	  printf("%c", carName[i]);
	}
	printf("\n");
	
	int length = sizeof(carName) / sizeof(carName[0]);
	for (i = 0; i < length; ++i) {
		printf("%c", carName[i]);
	}
	printf("\n");
}
