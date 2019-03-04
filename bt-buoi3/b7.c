#include<stdio.h>   

int main()  
{  
int n,m;  
int tong = 0;

printf("Nhap mot so bat ky: ");  
scanf("%d",&n);  
while(n>0)  
{  
m=n%10;  
tong=tong+m;  

n=n/10;  
}  
printf("\nTong cac ky so cua so da cho = %d",tong);  

}     