#include <stdio.h>
#include <stdlib.h>

//matrisin transpozu
int main() {
	int i,j;
	int dizi[2][3]={{2,3,8},{-2,9,1}};
	int transpoz[3][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			transpoz[j][i]=dizi[i][j];
		}
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<2;i++){
			printf("%d ",transpoz[j][i]);
		
		}
		printf("\n");
	}
	
	
	return 0;
}
