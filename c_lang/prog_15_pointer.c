#include<stdio.h>
void main()
{
    int a = 22;
    int *p = &a;
    printf("p = %u\n", p);
    p++;
    printf("p++ = %u\n", p);
    p--;
    printf("p-- = %u\n", p);

    float b = 22.22;
    float *q = &b;
    printf("q = %u\n", q);  
    q++;
    printf("q++ = %u\n", q);
    q--;
    printf("q-- = %u\n", q); 

    char c = 'a';
    char *r = &c;
    printf("r = %u\n", r);   
    r++;
    printf("r++ = %u\n", r); 
    r--;
    printf("r-- = %u\n", r);  
}
