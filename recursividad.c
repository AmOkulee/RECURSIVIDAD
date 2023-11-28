//llamada a si mismo
//factorial de un numero
//una funcion recursiva tiene una funci{on iterativa pero que es menos optima

//factorial(3)=3*factorial(2)
#include<stdio.h>

int factorial(int n );
int main(){
    int num;
    printf("número?");
    scanf("%d",&num);
    printf("el factorial de %d es: %d", num,factorial(num));

return 0;
}


int factorial(int n){
    int res;
    if(n==0)
        res =1;
    else
        res=n*factorial(n-1);

    return res;
}
