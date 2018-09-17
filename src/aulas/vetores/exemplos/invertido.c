#include <stdio.h>

int main(){
    int n;
    int i, v[100];
    printf("Digite a qtd de numeros que voce quer inserir:\n");
    scanf("%d" , &n);
    /*inserir dados no vetor*/
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    for (i = n-1; i>= 0; i--){
        printf("%d", v[i]);
    }
}
