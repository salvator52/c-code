#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,j,max=0,bas=0,bas2=0,gecici,gecici2,birler,max2=0;
//	int dizi[6]={15,628,971,9,2143,12};
    int dizi[6];
	int dizi2[6];
	for(i=0;i<6;i++){
		printf("%d.elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	//burda dizinin en büyük elemanýný buluyoruz
	for(i=0;i<6;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
	}
	
	//burada en büyük elelmanýn kaç basamaklý olduðunu buluyoruz
	while(max>0){
		bas++;
		max/=10;
	}
	
	
	i=0;
	while(i<6){
		//dizi 6 kere döneceði için burdaki deðerler her dizi döndüðünde sýfýrlanmalý
		birler=0;
	    gecici2=0;
		bas2=0;
		gecici=0;
		//dizninin her elemanýnýn kaç basamaklý olduðunu buluyoruz
		gecici=dizi[i];
		 while(gecici>0){
		 
		 	bas2++;
		 	gecici/=10;
		 	
		 }
		 
	birler=dizi[i]%10;	 
	gecici2=dizi[i];
	//burda dizinin her elemanýný en  büyük elemanýnýn basamak sayýsýna çýkarýyoruz	 
	while(bas2<=bas){
		gecici2=gecici2*10+birler;
		bas2++;
	}	
	
	dizi2[i]=gecici2;	
		
		i++;
		
	}
/*	
	for(j=0;j<6;j++){
		printf("%d  ",dizi2[j]);
	}
*/
//son kýsýmda dizi 6 kere dönecek ve artýk bize sonuç verecek
for(i=0;i<6;i++){
	//max2 6 kere  döneceði için her seferinde sýfýrdan baþlatýyoruz
	max2=0;
	//dizideki en büyük elemaný buluyoruz
	for(j=0;j<6;j++){
		if(dizi2[j]>max2){
			max2=dizi2[j];
		}
	}
	//tekrar bi döngü yaparak dizideki en büyük elemanýn hangi elemana denk geldiðini buluyoruz
	for(j=0;j<6;j++){
		
		if(dizi2[j]==max2){
			//burda hangi elelmana denk geldiðini bulduk ve ilk dizideki hangi elemana kaþýlýk geliyosa onu yazdýrýyoruz
			printf("%d",dizi[j]);
			//en büyük elemaný bidaha yazdýrmamak için küçük bi sayýyla yer deðiþtiriyoruz eksili olursa  kafamýz daha rahat olur
			dizi2[j]=-99;
			break;
		}
	}
}	
	
	
	
	
	
	
	
	
	return 0;
}
