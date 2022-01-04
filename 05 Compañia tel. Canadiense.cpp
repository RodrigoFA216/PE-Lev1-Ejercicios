/*Una empresa en telecomunicaciones canadiense ofrece servicios de callback a un precio atractivo. 
EL costo de las llamadas telefonicas depende tanto del lugar de origen de la llamada 
como de la zona geografica en la que se encuentre el pais de destino. 
En base a la tabla determina el costo por llamdda
*/
#include<stdio.h>
#include <stdlib.h>
main(){
	int clave, seg;
	float costo;
	printf("Clave de la zona geografica a la que se realizo la llamada:");
		scanf("%i", &clave);
	printf("Tiempo de duracion (seg):");
		scanf("%i", &seg);
	if(clave<=20 && clave >=0){
		if(clave=1){
			costo = seg*0.13;
			printf("El costo de la llamada a Estados Unidos fue de:%f",costo);
		}
		else if(clave=2){
			costo=seg*0.11;
			printf("El costo de la llamada a Canad%c fue de:%f", 160, costo);
		}
		else if(clave=5){
			costo=seg*0.22;
			printf("El costo de la llamada a Am%crica del Sur fue de:%f",130, costo);
		}
		else if(clave=6){
			costo=seg*0.19;
			printf("El costo de la llamada a Am%crica Central fue de:%f",130,costo);
		}
		else if(clave=7){
			costo=seg*0.17;
			printf("El costo de la llamada al interior del pa�s (M&cxico) fue de:%f",130,costo);
		}
		else if(clave=9){
			costo=seg*0.17;
			printf("El costo de la llamada a Europa fue de:%f",costo);
		}
		else if(clave=10){
			costo=seg*0.20;
			printf("El costo de la llamada a Asia fue de:%f",costo);
		}
		else if(clave=15){
			costo=seg*0.39;
			printf("El costo de la llamada a %curopa fue de:%f",costo);
		}
		else if(clave=20){
			costo=seg*0.28;
			printf("El costo de la llamada a Ocean%ca fue de:%f",costo);
		}
		return 0;
	}
	else{
		printf("\nLa clave ingresadas no pertenece a niguna de las zonas permitidas en esta region, por favor intentelo de nuevo\n");
	} 
system("PAUSE");     
   return 0;
}
