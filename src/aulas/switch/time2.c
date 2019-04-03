#include <stdio.h>
 
int main(){
    int times, sede, cor_uniforme;
    printf("Digite qual o time vc torce participa da Serie A:(1 - Sim, 2- Não):\n");
    scanf("%d", &times);
    printf("Digite se o time está na capital ou não(1-Capital, 2- Interior)\n");
    scanf("%d", &sede);
    printf("Digite que tipo de cores é do uniforme(1- cores, 2 - preto e branco)\n");
    scanf("%d", &cor_uniforme);

    switch(times){
        case 1:
         
        printf("Fortaleza");
        break;
        case 2:
        printf("Ceará");
        break;
        case 3:
        printf("Floresta");
        break;
        case 4:
        printf("Guarany(S)");
        break;
        default:
        printf("Time inexistente");
        break;
    }
    return 0;
}