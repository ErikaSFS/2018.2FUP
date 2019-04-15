#include <stdio.h>

int main(){
    int n, par, impar;
    scanf("%d", &n);
      int v[n];
        
         for(int i=0; i<n;i++){
             scanf("%d", &v[i]);
         }

         for(int i=0; i<n;i++){
             if(v[i]%2==1){
                 impar=v[i];
                 printf("%d", impar);
             }
         }
         for(int i=0; i<n;i++){
             if(v[i]%2==0){
                 par=v[i];
                 printf("%d", par);
             }
         }
         
}