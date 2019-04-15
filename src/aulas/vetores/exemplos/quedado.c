#include<stdio.h>

int main(){
    int queda, i;
    scanf("%d", &queda);
    int v[queda];

      for(i=0;i<queda;i++){
         scanf("%d", &v[i]);

      }

      for(i=0;i<queda-1;i++){
          if(v[i]> v[i+1]){
              printf("precisa de ajuste");
              return 0;
          }
      }
      printf("ok");
      return 0;
}