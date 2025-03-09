//Write a program of structure for five employee that provides the following 
//information print and display empno, empname, address and age.
#include <stdio.h>
struct employee{
    char name[30];
    int empId;
    float salary;
    char addr[100];
    int age;
};
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("\n Name :");          
	gets(emp.name);
    printf("\n ID :");            
	scanf("%d",&emp.empId);
    printf("\n Salary :");        
	scanf("%f",&emp.salary);
	printf("\n Address :");
	scanf("%s",&emp.addr);
	printf("\n Age : ");
	scanf("%d",&emp.age);
     
    printf("\nEntered detail is:");
    printf("\n Name: %s",emp.name);
    printf("\n Id: %d",emp.empId);
    printf("\n Salary: %f",emp.salary);
    printf("\n Address : %s",emp.addr);
    printf("\n Age : %d",emp.age);
}
