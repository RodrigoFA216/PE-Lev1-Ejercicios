/*Ejercicio 4.4
Indicar el tipo de triangulo introducido*/
#include<stdio.h>
main(){
	float l1, l2, l3;
		printf("INDICAR EL TIPO DE TRIANGULO INTRODUCIDO\n");
			printf("introdusca le medida de de cada lado del triangulo\n");
			scanf("%f %f %f", &l1, &l2, &l3);
	if(l1==l2 && l2==l3){
		printf("Se trata de un triangulo equilatero\n");
	}
	if(l1==l2 && l3!=l1){
		printf("Se trata de un triangulo isosceles");
	}
	if(l1!=l2 && l2!=l3){
		printf("Se trata de un triangulo escaleno");
	}
}
