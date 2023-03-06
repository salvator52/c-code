#include <stdio.h>
#include <stdlib.h>


int main() {
	int dizi[5]={9,2,4,5,7};
	int i,j,deger=0;
	
	for(i=0;i<5;i++){
		
		for(j=i+1;j<5;j++){
			
			if(dizi[i]>dizi[j]){
				deger=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=deger;
			}
		}
		
	}
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
	
	
	
	
	
	return 0;
}
