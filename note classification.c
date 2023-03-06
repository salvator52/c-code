#include <stdio.h>
#include <stdlib.h>

int siniflandir(int not){
	int deger=0;
	if(not>=90 && not<=100 ){
		deger=4;
	}
	else if(not>=80 && not<90){
		deger=3;
	}
	else if(not>=70 && not<80){
		deger=2;
	}
	else if(not>=60 && not<70){
		deger=1;
	}
	else 
	deger=0;
	return deger;
}

int main() {
	int not1;
	printf("not1 degerinizi giriniz:");
	scanf("%d",&not1);
	printf("%d",siniflandir(not1));
	
	return 0;
}
