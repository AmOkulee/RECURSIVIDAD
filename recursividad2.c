//potencia de un numero sin recursividad
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

//potencia de un numero con recursividad
int potencia(int n,int elv);

int main(){
	int num=2;
	int pot=3; 
		
	printf("tonce: el num: %d, elevado a: %d, es igual a: %d", num,pot, potencia(num, pot));
	
return 0;
}


int potencia(int n, int elev){
	
	int solucion=1;
	
	if(elev ==0){
		
	return 1;
		
	}
	
	solucion = n * potencia(n, elev-1);
	
	return 	solucion;
	//return n * potencia(n, elev - 1); y me ahorro poner la variable solucion
}


