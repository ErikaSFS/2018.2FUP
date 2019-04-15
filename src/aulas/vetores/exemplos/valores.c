//percorre um vetor de 0 a 99 colocando o valor lido pelo teclado
#include <stdio.h>

int main(){
    int v[100];
    int i;

      for(i=0;i<100;i++){
          printf("Entre com v[%d]=", i);
          scanf("%d", &v[i]);
      }
      return 0;
}