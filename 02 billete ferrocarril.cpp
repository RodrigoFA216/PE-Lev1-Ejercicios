/*calcular el billete de ida y vuelta en ferrocarril, 
conociendo la distancia entre las dos ciudades como el tiempo de estancia de la cuidad destino.
Si el dnumero de dias de estancia superior a 10 y la distancuia total (ida y vuelta) a rrecorrer es superior a 500 km
el precio del billete se reduce 20%.
el precio por km es de $0.19*/
#include <stdio.h>
main (){
	float dis, promo, normal, total;
	int dias;
	const float km=0.19;
	printf("Hola, para conocer el precio total de tu billete redonde necesito saber:\n");
	printf("Distancia entre la ciudad de origen y de destino:\n");
	scanf("%f", &dis);
	printf("Cuantos dias de estancia son:\n");
	scanf("%i", &dias);
	normal = dis*km;
	if (dis<=0 && dias<=0){
		printf("Los valores ingresados no son logicos\n");
	}
	else if (dis>=500 && dias>=10){
		printf("Tu boleto califica para tener un 20%c de descuento\n",37);
		promo = normal *0.20;
		total = normal - promo;
		printf("El precio total de tu billete es:\n\t%f\n Ahorraste:\n\t%f\n Precio final es de:\n\t%f\n",normal,promo,total);
	}
	else{
		printf("El precio total de tu billete es:\n\t%f\n",normal);
	}
	printf("Gracias por viajar con nostros :)");		
}
