#include <stdio.h>
int main(){
    int n;
    int ant1 = 1, ant2 = 1, fib=1;
    
    printf("Qual valor série de fibonacci");
    scanf("%d", &n);
    
    if(n==1 || n==2) printf("1");
    else{
        
        for(int i=3; i<=n; i++){
            fib=ant1+ant2;
            ant1 = ant2;
            ant2 = fib;
            
        }
        printf("O %do valor da série de fibonacci é %d.", n, fib);
        
    }
    return(0);
}
