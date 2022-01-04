#include<stdio.h>

main(){
	char puesto[20];
	float horas, sueldo, sueldoreal, descuento;
	
	printf("Ingrese su puesto de trabajo: ");
	scanf("%s",&puesto);
	printf("Ingrese las horas laboradas: ");
    scanf("%f", &horas);
    sueldo= horas*100;
    descuento= (sueldo*20)/100;
	sueldoreal= sueldo-descuento;
	
	if(sueldo>=8000){
		printf("\nSu puesto de trabajo es: %s \nSu sueldo por las horas laboradas es de: $%.2f \nPero su sueldo es mayor a $8000 pesos por lo que se le debe descontar el 20 porciento por lo que su sueldo real es de: $%.2f", puesto, sueldo, sueldoreal);
	}
	if(sueldo<8000){
		printf("\nSu puesto de trabajo es de: %s \nSu sueldo es de: $%f", puesto, sueldo);
	}
}
