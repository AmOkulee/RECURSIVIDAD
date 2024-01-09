#include<stdio.h>

int potencia(int n,int elv);

int main(){
	int num=2;
	int pot=3; 
		
	printf("tonce: %d", potencia(num, pot));
	
return 0;
}


int potencia(int n, int elev){
	
	int sol=1;
	int i= 1;
	
	while(i<=elev){
		
	sol *= n;
	
	i++; 
}
	return sol;
	
}
