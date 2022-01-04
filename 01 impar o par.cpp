/*Construye  un programa en C que:
al recibir como dato un nUmero entero, 
determine e imprima si el mismo es par, impar o nulo.*/


#include<stdio.h>

int main(){
	int num;
	printf("\nIngrese un numero entero:");
		scanf("%i",&num);

	if (num==0){
		printf("\nEl numero entero es nulo");
	}
	else if(num%2==0){
		printf("\nEl numero es par");	
	}
	if(num%2==1){
		printf("\nEl numero es impar");
	}
	return 0;
}



