#include <stdio.h> 

#include <math.h> 

int main(){ 

    float x, a, f = 0; 

    int n, i = 0; 

    printf("%s","Nhap x = "); 

    scanf("%f",&x); 

    printf("%s","Nhap n = "); 

    scanf("%d",&n); 
    for( i=0;i<=n;i++){
        printf("Nhap so thuc a%d = ",i); 
        scanf("%f",&a);
        
    }
    f += a*pow(x,n);
    printf("F(x) = %.2f\n",f); 

   
    


    return 0; 

}

