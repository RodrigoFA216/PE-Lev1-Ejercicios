/*imc*/
#include<stdio.h>
#include<math.h>
main(){
	float peso, altura, masa;
	printf("inserte su peso en kilos \n");
	scanf("%f", &peso);
	printf("inserte su altura en metros \n");
	scanf("%f", &altura);
	masa=peso/altura;
	printf("su IMC es %.2f", masa);
}
