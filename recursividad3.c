//quiero que este programa elija un numero aleatorio (entre un rango) y luego imprima los numeros en orden ascendente desde 1 hasta el numero.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int sol(int random);


int main(){

    srand(time(NULL));
    int random = rand()%11;

    printf("su numero, %d \n", random);

    printf("%d \n", sol(random));

return 0;}



int sol(int random){

if(random == 0){

    return 0;
}else {

    printf("%d \n", random);
}


return sol(random-1);}
