#include <stdio.h>

int main(){


 printf("digite o primeiro valor:");
 scanf ("%d", &x);
 printf ("digite o segundo valor:");
 scanf ("%d", &y);
 x = y;
 y = x;

 printf(“x: %d”, x);
 printf(“y: %d”, y);

return 0;

}
