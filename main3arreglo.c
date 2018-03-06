#include<stdio.h>
#include<stdlib.h>

main()
{
	int arreglo[5];
	int i;
	for(i=0;i<=4;i++)
	{
		printf("muetranos un valor:");
		scanf("%d",&arreglo[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",arreglo[i]);
	}
}
