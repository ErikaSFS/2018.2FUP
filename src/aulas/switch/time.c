#include <stdio.h>
 
int main(){
    int times, sede, cor_uniforme;
    printf("Digite qual o time vc torce participa da Serie A:(1 - Sim, 2- Não):\n");
    scanf("%d", &times);
    printf("Digite se o time está na capital ou não(1-Capital, 2- Interior)\n");
    scanf("%d", &sede);
    printf("Digite que tipo de cores é do uniforme(1- cores, 2 - preto e branco)\n");
    scanf("%d", &cor_uniforme);

    if(times==1 && sede ==1 && cor_uniforme ==1){
        printf("Fortaleza");

    }
     if(times ==1 && sede==1 && cor_uniforme ==2){
        printf("Ceara");
    } 
    if(times ==2 && sede ==1 && cor_uniforme ==1){
        printf("Floresta");
    }
    if(times==2 && sede ==2 && cor_uniforme==1){
        printf("Guarany(S)");
    }
}