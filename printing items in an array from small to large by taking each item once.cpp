#include <iostream>


int main() {
	
    int kopya[10]={0};
    int l,i,j,k=0,flag=0,a=0;
    
    for(i=0;i<10;i++){
    	flag=0;
    	for(j=0;j<i;j++){
    		if(dizi[i]==dizi[j])
			flag=1;
		}
    	
    	if(flag!=1){
    		kopya[k++]=dizi[i];
		}
	}
	
	
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
			
			if(kopya[i]>kopya[j]){
				
				a=kopya[i];
				kopya[i]=kopya[j];
				kopya[j]=a;
			}
		}
		
	}  
	for(i=0;i<k;i++){
		printf("%d ",kopya[i]);
	}
    
	return 0;
}
