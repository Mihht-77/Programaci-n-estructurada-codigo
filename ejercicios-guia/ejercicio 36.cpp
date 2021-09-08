/*Ejercicio 36*/
#include <stdio.h>

main() {
  int i, j, tabla;
  for (i=1;i<=10;i++) /*Indica el número de tabla a generar*/
  {
    printf("Tabla del numero %d\n", i);
    for(j=1;j<=10;j++)/*Ciclo para generar la tabla de multiplicar*/
    {
      tabla=i*j;
      printf("%dx%d=%d\n", i, j, tabla);
    }
    printf("\n");
  }
}
