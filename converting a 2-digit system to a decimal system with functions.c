#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//2 lik tabaný 10luk tabana çevirme

int tabancevirme(int);

int main (){
	int sayi,sonuc;
	printf("2 lik taban da bir sayi giriniz:");
	scanf("%d",&sayi);
	sonuc=tabancevirme(sayi);
	printf("\nsonucunuz:%d",sonuc);
	
	
	return 0;
}

int tabancevirme(int a){
	int i=0 , toplam=0, kalan , sonuc; 
	while(a>0){
		kalan=a%10;
		sonuc=kalan*pow(2,i);
		toplam+=sonuc;
		a/=10;
		i++;
	}
	
	return toplam;
}







