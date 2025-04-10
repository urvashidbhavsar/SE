// Write a Program of Print a number and check the number is palindrome or 
//not using recursive Function.

#include <stdio.h>
#include <math.h> 
int reverse(int num);
int isPalindrome(int num);

int main()
{
    int num;    
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is not palindrome number.\n", num);
    }
    
    return 0;
}

int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }   
    return 0;
}
int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
