#include <stdio.h>
#include <stdlib.h>

//dizideki en buyuk 2.elemani veren c kodu
int main() {
	int i,max=0,ikincimax=0,min=0,ikincimin=0;
	int dizi[7]={1,9,7,5,-78,-9,11};
	
	for(i=0;i<7;i++){
		
		if(dizi[i]>max){
			ikincimax=max;
			max=dizi[i];
		}
		if(dizi[i]>ikincimax && dizi[i]!=max){
			ikincimax=dizi[i];
		}
	}
	
	printf("%d",ikincimax);
	
	return 0;
}
