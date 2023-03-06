#include <stdio.h>
#include <stdlib.h>

//diziler kullanarak onluk sistemden ikilik sisteme cevirme
void ikilik(int a){
	
    int i=0,k[20];	
	while(a>=1){
		i++;
		k[i]=a%2;
		a/=2;
	}
	printf("\nikilik tabanda sayinizin karsiligi:");
	//ikilik sistemde yazmamiz için sondan  basa dogru geliyodu o yuzden bu þekilde 
	for(i=i;i>0;i--){
		printf("%d",k[i]);
	}
	
	
	
	
}

int main() {
    int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	ikilik(sayi);
	return 0;
}








