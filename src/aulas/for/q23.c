#include <stdio.h>
int main(){
    int a,b, result=1, i=1;
    
    printf("Digite o valor de a e de b");
    scanf("%d %d", &a, &b);
    // Poderia fazer com for(int i=1;i<=b;i++)
    while(i<=b){
        result = result * a;
        i++;
    }
    
    printf("O valor desta potência é %d", result);

    return(0);
}
