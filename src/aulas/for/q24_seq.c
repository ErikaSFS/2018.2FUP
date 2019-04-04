#include <stdio.h>
int main(){
    int n;
    int ant1 = 1, ant2 = 1, fib=1;
    
    printf("Quantos termos da série de fibonacci você quer saber?");
    scanf("%d", &n);
    
    if(n==1) printf("1");
    else{
        printf("1-1");
        for(int i=3; i<=n; i++){
            fib=ant1+ant2;
            printf("-%d", fib);
            ant1 = ant2;
            ant2 = fib;
            
        }
       
        
    }
    return(0);
}
