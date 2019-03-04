#include <stdio.h>
int main()
{
    int n, a = 0, b, num;

    printf("Enter an integer: ");
    scanf("%d", &n);

    num = n;
    while( n!=0 )
    {
        b = n%10;
        a = a*10 + b;
        n /= 10;
    }
    if (num == a)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);
    
    return 0;
}