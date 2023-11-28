#include<stdio.h>
//sumatorio de la descomposicion de un numero

int sumatorio(int n);
int main(){
int n=0;

printf("numero?= ");
scanf("%d",&n);
printf("el sumatorio es: %d \n", sumatorio(n));

return 0;}

int sumatorio(int n){
  int res;

    if(n==0){
    return 0;}
    else if(n>0){

      res=n+sumatorio(n-1);
    }

return res;
}
