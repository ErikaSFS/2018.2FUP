#include <stdio.h>

int main(){
    int k, i, a, m;
    int numerador=1, denominador=1;
    float somatorio=0;
    printf("Digite os valores para a e para m");
    scanf("%d%d", &a, &m);
    
    k=0;
    // Laço que itera no somatório
    while(k<=m){
        numerador=1;
        denominador=1;
        i=1;
        
        //calculando a potencia do numerador
        while(i<=k){
            numerador = numerador * a;
            i++;
        }
         
        //calculando o fatorial do denominador
        int j=k;
        while(j>=1){
            denominador = denominador*j;
            j--;
        }
        
        float result = (float) numerador/denominador;
        somatorio = somatorio + result;
        
        k++;
    }
    
    printf("O resultado do somatório é %f",somatorio );
    return(0);
}
