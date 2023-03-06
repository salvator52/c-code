#include <stdio.h>
#include <stdlib.h>


void obeb(int,int);
int main() {
	int a,b;
	printf("a ve b degerlerini giriniz:");
	scanf("%d,%d",&a,&b);
	obeb(a,b);
	return 0;
}

void obeb(int s1,int s2){
	int buyuk,kucuk,i,ortak=0;
    if(s1>s2){
    	buyuk=s1;
    	kucuk=s2;
	}
	else{
		buyuk=s2;
		kucuk=s1;
	}
	for(i=2;i<=kucuk;i++){
		if(kucuk%i==0 && buyuk%i==0){
			ortak=i;
		}
	}
	printf("%d",ortak);
	
}
