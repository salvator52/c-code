#include <stdio.h>
#include <stdlib.h>

void asal(int sayi){
	int flag=0,i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			flag++;
		}
	}
	
	if(sayi==2){
		printf("%d asal sayidir",sayi);
	}
	
	else if(flag==0){
		printf("%d asal sayidir",sayi);
	}
	
	else 
	printf("sayiniz asal sayi degildir");
    }

int main() {
    int a;
    printf("a degerini giriniz:");
    scanf("%d",&a);
    asal(a);

	return 0;
}
