#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,deger;
	printf("ikizkenarin yuksekligini giriniz:");
	scanf("%d",&deger);
	
	for(i=1;i<=deger;i++){
		for(j=1;j<=deger-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
