#include <stdio.h>
#include <stdlib.h>

int main() {
	//matrisin sutunlardaki elemanlarinin toplamini veren program
	
	int i,j,toplam=0;
	
	int dizi[3][5];
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d",&dizi[i][j]);
		}
		
	}
	
	for(j=0;j<5;j++){
		toplam=0;
		for(i=0;i<3;i++){
			toplam+=dizi[i][j];
		}
		printf("%d.sutunun toplami:%d\n",j,toplam);
	}
	
	
	
	return 0;
}
