/*Uso de contadores*/
/*Leer N calificaciones y mostrar la cantidad de aprobados y reprobados*/
#include <stdio.h>

main()
{
	int N, conta, contr, i;
	float calif;

		do
		{
		printf("Cantidad de calificaciones a ingresar: ");
		scanf("%d", &N);
		}

	while(N<=0);
	conta=0;
	contr=0;

	for(i=1; i<=N; i++)
	{
		do
		{
			printf("Ingresa la calificaci�n: ");
			scanf("%f", &calif);
		}
		while(calif<0 || calif>100);

		if(calif>=70 &&calif<=100)
		{
			conta=conta+1; /*Se cuenta a los aprobados*/
		}
		else
		{
			contr=contr+1; /*Se cuenta a los reprobados*/
		}
	}
	printf("Cantidad de calificaciones aprobadas %d", conta);
	printf("\nCantidad de calificaciones reprobadas %d", contr);
}
