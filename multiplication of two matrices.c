#include <stdio.h>
#include <stdlib.h>
//iki matrsiin çarpimi

int main() {
    
    	int i,j,k,n,m,l,toplam=0;
     
	printf("1.matrisin satir sayisini giriniz:");
	scanf("%d",&n);
    printf("1.matrisin sutun sayisini giriniz:");
	scanf("%d",&m);	
	printf("2.matrisin sutun sayisini giriniz:");
	scanf("%d",&l);
	
	int dizicarp[n][l];
	int mat1[n][m];
	int mat2[m][l];
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0; i<n; i++){  
        for( j=0; j<l; j++){
            for( k=0; k<m; k++){
                toplam += mat1[i][k] * mat2[k][j];  
            }
            dizicarp[i][j] = toplam;  
            toplam = 0;  
            printf("%d ", dizicarp[i][j]); 
        }
        printf("\n");
    }
	
	
	
	return 0;
}
