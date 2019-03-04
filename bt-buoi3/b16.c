#include<stdio.h>   
#include<math.h>
int main(){  
  int i,n;  
  
  printf("Nhap mot so bat ky: ");  
  scanf("%d",&n);  
  float tong = 0;
  for(i=0;i<=n;i++){
      tong = tong +  -(pow((-1),i+1))/(1+2*i );
  }  
    printf("so PI = %f ",tong);
  
} 