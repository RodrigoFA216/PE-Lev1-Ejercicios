/*Ejercicio 4.5 
Elegir una figura geometrica y calcular su area
triangulo
circulo
cuadrado
rectangulo*/
#include<stdio.h>
main(){
	int tecla;
	float b, h, r, pi=3.1416, l, l1, l2;
	printf("AREA DEL TRINGULO, CIRCULO, CUADRADO Y RECTANGULO\n");
	printf("Para el triangulo, oprima 1\nPara el circulo, oprima 2\nPara el cuadrado, oprima 3\nPara el rectangulo oprima 4\n");
		scanf("%i", &tecla);
	if(tecla==1){
		printf("De el valor de la base y de la altura\n");
		scanf("%f %f", &b, &h);
			printf("El area del triangulo es: %0.2f\n", (b*h)/2);
	}
	if(tecla==2){
		printf("De el valor del radio\n");
		scanf("%f", &r);
			printf("El valor del area del circulo es: %0.2f\n", pi*r*r);
	}
	if(tecla==3){
		printf("De el valor de un lado\n");
		scanf("%f", &l);
			printf("El valor del area del triangulo es: %0.2f\n", l*l);
	}
	if(tecla==4){
		printf("De el valor del lado mas chico y el lado mas grande\n");
		scanf("%f %f",&l1, &l2);
			printf("El area del rectangulo es %0.2f\n", l1*l2);
	}
}