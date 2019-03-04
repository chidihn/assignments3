#include <stdio.h> 

#include <math.h> 

int main(){ 
    int n, a; 
    float tong;
    printf("%s","Nhap so tien ma ban muon gui: "); 
    scanf("%d",&a); 
    printf("%s","Nhap so nam ma nguoi do gui: "); 
    scanf("%d",&n); 
    tong = a*pow(1.1000,n);
    printf("tong tien nguoi do nhan dc %.2f\n",tong); 
    return 0; 

}

