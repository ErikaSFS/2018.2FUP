//um veotr de 5 elementos para somar o maior com o menor elemento
#include <stdio.h>

int main(){
    int v[5];
    int i, maior_vet, menor_vet,soma_vet;

      for(i=0; i<5; i++){
          scanf("%d", &v[i]);
      }

    //As variáveis, maior e menor, recebem inicialmente o valor
    //do primeiro elemento do vetor, ou seja, v[0]//
    maior_vet = v[0]; 
    menor_vet = v[0];

        for (int i = 0; i < 5; ++i) {
        if (v[i] > maior_vet) 
            maior_vet = v[i];
        if (v[i] < menor_vet)
         menor_vet = v[i];
    }
    soma_vet = maior_vet + menor_vet;
    printf("%d", soma_vet);

}