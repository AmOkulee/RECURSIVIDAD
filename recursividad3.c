#include<stdio.h>

int numeros(int n);

int main(){
	
	int num=12;
	

printf("numerito: %d", numeros(num));

return 0;
}

int numeros(int n){
	int an;
	
	int i;
	
	if(i>0){
		
	
		
		for(i=0; 1<n ;i--){
			
			an = numeros(n-1);
		}
	
	}else{
		
		
	return 0;
	
	}
	
	
return an;
}
