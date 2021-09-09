#include <stdio.h>

main () {
  int x, y, z;
  printf("Ingrese un valor para x: ");
  scanf("\n%d", &x);

  printf("Ingrese un valor para y: ");
  scanf("\n%d", &y);
  z = x + y;
  printf("La suma de x + y es: \n%d", &z);
}
