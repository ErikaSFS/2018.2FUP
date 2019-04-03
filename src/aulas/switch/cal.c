#include <stdio.h>

int main(){
    int x, y;
    char op;

    printf("Qual eh a expressao?\n");
    scanf("%d %c %d", &x, &op, &y);

    switch(op){
        case '+': printf("\nresultado = %d\n", x+y);
        break;
        case '-': printf("\nresultado = %d\n", x-y);
        break;
        case '*': printf("\nresulado = %d\n", x*y);
        break;
        case '/': printf("\nresultado = %d\n", x/y);
        break;
        default : printf("\nOperador inválido: %c",op);
        break;
}
return 0;
}