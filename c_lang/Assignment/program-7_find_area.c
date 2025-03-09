#include<stdio.h>
void main(){
	/*find triangle area*/
	int ch;
	float h,b,t_area,hei,w,r_area,r,c_area;
	printf("\n select options :");
	printf("\n 1. find triangle area.");
	printf("\n 2. find Rectangle area.");
	printf("\n 3. find Circle area.");
	printf("\n =======================");
	printf("\n choose number : ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\n Enter value of height : ");
			scanf("%f",&h);
			printf("\n Enter value of base : ");
			scanf("%f",&b);
			t_area = (h*b)/2;
			printf("Area is : %f",t_area);
			break;
		case 2:
			printf("\n Enter value of height : ");
			scanf("%f",&hei);
			printf("\n Enter value of width : ");
			scanf("%f",&w);
			r_area = hei*w;
			printf("Area is : %f",r_area);
			break;
		case 3:
			printf("\n Enter the circle Radius : ");
			scanf("%f",&r);
			c_area = 3.14*r*r;
			printf("Area is : %f",c_area);
			break;
		default :
			printf("\n choose the case in 1 to 3");
			break;
	}	
}


