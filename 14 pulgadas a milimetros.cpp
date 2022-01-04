#include<stdio.h>

main(){
	float pulg, yar, mill, mili, metro, km;
	printf("Ingrese el valor de las pulgadas; ");
	scanf("%f", &pulg);
	printf("Ingrese el valor de las yardas: ");
	scanf("%f", &yar);
	printf("Ingrese el valor de las millas: ");
	scanf("%f", &mill);
	
	mili= pulg*25.4;
	metro= yar*0.91;
	km= mill*1.61;
	
	printf("\n\nEl valor de las pulgadas en milimetros es de: %.2f mm", mili);
	printf("\n\nEl valor de las yardas en metros es de: %.2f m", metro);
	printf("\n\nEl valor de las millas en kilometros es de: %.2f km", km);
}