#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int deger,i,j;
	printf("dik ucgeninizin uzunlugunu giriniz: ");
	scanf("%d",&deger);
	
	for(i=0;i<deger;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
