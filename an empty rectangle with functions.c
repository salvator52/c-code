#include <stdio.h>
#include <stdlib.h>
//fonksiyonlar kullanarak içi boþ dikdörtgen yapma

void dikdortgen(int,int);
int main() {
	int kisa,uzun;
	printf("kisa kenarin uzunlugunu giriniz:");
	scanf("%d",&kisa);
	printf("uzun kenarin uzunlugunu giriniz:");
	scanf("%d",&uzun);	
	dikdortgen(uzun,kisa);
	return 0;
}

void dikdortgen(int uzunkenar,int kisakenar){
    int k,i,j,l;
	for(i=1;i<=uzunkenar;i++){
    	printf("* ");
	}
    printf("\n");
    for(k=1;k<=kisakenar-2;k++){
    	for(j=1;j<=uzunkenar;j++){
    		if(j==1){
    			printf("* ");
			}
			else if(j==uzunkenar){
				printf("* ");
				printf("\n");
			}
			else{
				printf("  ");
			}
		}
	}
    for(l=1;l<=uzunkenar;l++){
    	printf("* ");
	}








}

