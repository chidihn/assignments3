#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Ban hay nhap gia tri cho n : \n");
	scanf("%d",&n);
	int i;
	int tong = 0;
	for ( i = 0; i<= n; i++){
		tong += i*i;
	}
	printf("ket qua la %d",tong);
	return 0;
}
