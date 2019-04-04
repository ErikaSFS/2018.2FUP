#include <stdio.h>
int main(){
    float nota, media, soma=0;
    // Poderia fazer com while ou do while(i<=b) - com isto teria que definir e inicializar i antes e incrementar dentro
    int i=1;
    do{
        printf("Digite a nota %d\n", i);
        scanf("%f", &nota);
        soma = soma + nota;
        i++;
    }while(i<=20);
    
    media = soma/20.0;
    
    printf("A média das 20 notas é %.2f", media);

    return(0);
}
