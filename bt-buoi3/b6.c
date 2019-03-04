#include <stdio.h> 

int main(){ 

    int s, i = 1, x =0; 

    long n; 

    printf("%s","Nhap so nhi phan (toi da 10 chu so): "); 

    scanf("%li",&n); 

    while( n > 0) { 

        s = n % 10; 

        x += s * i; 

        i *= 2; 

        n /= 10; 

    } 

    printf("So do trong he co so 10 la: %d\n",x); 


    return 0; 

}