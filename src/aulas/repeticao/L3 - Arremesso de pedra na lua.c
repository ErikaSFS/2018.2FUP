#include<stdio.h>
#include <limits.h>
int main(){
    int  i,n,a,b,dif,g=-1,m=INT_MAX;
      scanf("%d",&n);
    for(i=0;i<n; i++){
    scanf("%d",&a);
    scanf("%d",&b);
    dif=a-b;
    if((a >= 10) && (b >= 10)){
        if(dif<0){
        dif=dif*-1;
        }
        if(dif<=m){
        m=dif;
        g=i;
    }
    }
    } if(g==-1){
        printf("sem ganhador");
        
    } else 
    printf("%d",g);
                                                                            
    
}

