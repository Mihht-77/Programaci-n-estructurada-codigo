#include <stdio.h>

int main () {
  int x, y, z;
  printf("Ingrese un valor para x: ");
  scanf("\n%d", &x);

  printf("Ingrese un valor para y: ");
  scanf("\n%d", &y);

  z = x + y;
  printf("El valor de z es: \n%d", &z);
}
