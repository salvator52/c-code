#include <stdio.h>
#include <stdlib.h>

//dizi elemanlarini tersten yazdirma

int main() {
    int n,diziuzunluk,i;
    printf("dizinin uzunlugunu giriniz:");
    scanf("%d",&diziuzunluk);
    n=diziuzunluk;
    int dizi[n];
    i=0;
    while(n>0){
    	printf("%d.sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		i++;
		n--;
	}
    for(i=diziuzunluk-1;i>=0;i--){
    	printf("%d  ",dizi[i]);
	}
    

	
	return 0;
}
