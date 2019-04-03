#include <stdio.h>

int main()
{
  char op;
  float valor;
  
  

  printf("Qual a moeda que vc quer converter:\n");
  printf("Opcao 1: Dolar Americano\n");
  printf("Opcao 2: Dolar Canadense\n");
  printf("Opcao 3: Euro\n");
  printf("Opcao 4: Libra\n");
  scanf(" %c", &op);

  printf("Qual seria o valor para troca:\n");
  scanf("%f", &valor);

 
  switch (op)
  {
  case '1':
    printf("O valor da cotacao eh: % 2.f dolares americanos\n", valor/3.64);
    break;

  case '2':
    printf("O valor da cotacao eh: % 2.f dolares canadenses\n", valor/2.82);
    break;

  case '3':
    printf("O valor da cotacao eh: % 2.f Euros\n", valor/4.29);
    break;

  case '4':
    printf("O valor da cotacao eh: % 2.f Libras\n", valor/4.95);
    break;

    default:
    printf("Opcao invalida!\n");
    break;
  }
  return 0;
}