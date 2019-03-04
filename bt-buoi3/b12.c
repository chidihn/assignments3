#include<stdio.h>  

int main()  
{  
 int n1=1,n2=1,n3,i,n;  
  
 printf("Ban hay nhap so n: ");  
 scanf("%d",&n);  
 printf("\n%d  ",n1);  
  
 for(i=2;i<n;i++)   
 {  
  n3=n1+n2;  
  if (n3 <n) {
     printf(" %d ",n3);
    n1=n2;  
    n2=n3;  
  }
  
    
 }  
   
}  