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
	
	//burda dizinin en b�y�k eleman�n� buluyoruz
	for(i=0;i<6;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
	}
	
	//burada en b�y�k elelman�n ka� basamakl� oldu�unu buluyoruz
	while(max>0){
		bas++;
		max/=10;
	}
	
	
	i=0;
	while(i<6){
		//dizi 6 kere d�nece�i i�in burdaki de�erler her dizi d�nd���nde s�f�rlanmal�
		birler=0;
	    gecici2=0;
		bas2=0;
		gecici=0;
		//dizninin her eleman�n�n ka� basamakl� oldu�unu buluyoruz
		gecici=dizi[i];
		 while(gecici>0){
		 
		 	bas2++;
		 	gecici/=10;
		 	
		 }
		 
	birler=dizi[i]%10;	 
	gecici2=dizi[i];
	//burda dizinin her eleman�n� en  b�y�k eleman�n�n basamak say�s�na ��kar�yoruz	 
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
//son k�s�mda dizi 6 kere d�necek ve art�k bize sonu� verecek
for(i=0;i<6;i++){
	//max2 6 kere  d�nece�i i�in her seferinde s�f�rdan ba�lat�yoruz
	max2=0;
	//dizideki en b�y�k eleman� buluyoruz
	for(j=0;j<6;j++){
		if(dizi2[j]>max2){
			max2=dizi2[j];
		}
	}
	//tekrar bi d�ng� yaparak dizideki en b�y�k eleman�n hangi elemana denk geldi�ini buluyoruz
	for(j=0;j<6;j++){
		
		if(dizi2[j]==max2){
			//burda hangi elelmana denk geldi�ini bulduk ve ilk dizideki hangi elemana ka��l�k geliyosa onu yazd�r�yoruz
			printf("%d",dizi[j]);
			//en b�y�k eleman� bidaha yazd�rmamak i�in k���k bi say�yla yer de�i�tiriyoruz eksili olursa  kafam�z daha rahat olur
			dizi2[j]=-99;
			break;
		}
	}
}	
	
	
	
	
	
	
	
	
	return 0;
}
