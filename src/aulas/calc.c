#include <stdio.h>

int soma( int a, int b){
    int adi;
    adi = a+b;

    return adi;
}

int sub( int a, int b){
    int dif;
    dif = a-b;

    return dif;
}

int mult( int a, int b){
    int prod;
    prod = a*b;
    return prod;
}

int div(int a, int b){
    int quo;
    quo = a/b; 
    return quo;
}

int main(){
    int a, b, opcao;
    printf("Digite dois numeros inteiros");
    scanf("%d %d", &a, &b);
    scanf ("%d", &opcao);
     
     if(opcao == 0){
         printf("%d", soma(a,b));
     }
     if(opcao == 1){
         printf("%d", sub(a,b));
     }
      if(opcao == 2){
         printf("%d", mult(a,b));
     }
      if(opcao == 3){
         printf("%d", div(a,b));
     }


}