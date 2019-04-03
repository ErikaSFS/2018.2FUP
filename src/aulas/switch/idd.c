#include <stdio.h>

int main()
{
  int idd;

  printf("Digite a idade:");
  scanf("%d", &idd);

  switch (idd)
  {
  case '0':
    printf("crianca");
    break;

  case '1':
    printf("adolescente");
    break;

  case '2':
  case '3':
    printf("");
    break;
  case '4':
  case '5':
    printf("");
  default:
    break;
  }
  return 0;
}