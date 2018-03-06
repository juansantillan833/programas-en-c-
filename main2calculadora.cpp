#include <stdio.h>
#include <conio.h>

main()
{
	int val1, val2, opc, resultado;
	while (opc!=5)
	{
		printf("****************calculadora en c***************\n");
		printf("1.- suma\n");
		printf("2.- resta\n");
		printf("3.- multiplicacion\n");
		printf("4.- division\n");
		printf("5.- salir\n");
		printf("selecciona una opcion: ");
		scanf("%d",&opc);
		
		if(opc!=5){
			printf("El valor primero: ");
			scanf("%d",&val1);
			printf("El segundo valor: ");
			scanf("%d",&val2);
		}
		
		switch(opc){
			case 1:
				resultado= val1+val2;
				printf("El resultado de la suma es %d \n",resultado);
				break;
			case 2:
				resultado= val1-val2;
				printf("El resultado de la resta es %d \n",resultado);
				break;
			case 3:
				resultado= val1*val2;
				printf("El resultado de la multiplicacon es %d \n",resultado);
				break;
			case 4:
				resultado= val1/val2;
				printf("El resultado de la division es %d \n",resultado);
				break;
			case 5:
				break;
		}
	}
}

