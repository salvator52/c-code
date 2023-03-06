#include <stdio.h>
#include <stdlib.h>


//iki matrisin toplamini veren program
int main() {
	int i,j;
	int sonuc[3][3];
	int dizi1[3][3]={{1,5,3},{4,7,-1},{2,7,9}};
	int dizi2[3][3]={{9,-4,7},{1,2,6},{4,6,-7}};
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			sonuc[i][j]=dizi1[i][j]+dizi2[i][j];
			
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",sonuc[i][j]);
			if(j==2){
				printf("\n\n");
			}
		}
	}
	
	
	
	return 0;
}
