#include <stdio.h>
#include <stdlib.h>

int tersten(int);
int main() {
	int sayi;
	printf("sayi degerini giriniz:");
	scanf("%d",&sayi);
	
	printf("girdiginiz sayinin tersi:%d",tersten(sayi));
	return 0;
}

int tersten(int s1){
	int ters=0,k;
	while(s1>0){
		k=s1%10;
		ters=ters*10+k;
		s1/=10;
	}
	return ters;
}
