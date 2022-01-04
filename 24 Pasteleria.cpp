//calcular el monto de las ventas del dia de una pasteleria//
#include <stdio.h>
#include <stdlib.h>
main(){
	const float g=300, m=250, ch=200,pan=15;
	int pasg, pasm, pasch,npan, totalg,totalm,totalch,totalpan,totaldia;
	printf("Cuantos pasteles grandes se vendieron:\n");
	scanf("%i",&pasg);
	printf("Cuantos pasteles medianos se vendieron:\n");
	scanf("%i",&pasm);
	printf("Cuantos pasteles chicos se vendieron:\n");
	scanf("%i",&pasch);	
	printf("Cuantos panes se vendieron:\n");
	scanf("%i",&npan);
	if (pasg<0 && pasm<0 && pasch<0 && npan<0){
		printf("Algo anda mal, verifica tus datos ingresados\n\n\n");
		return main();
	}
	else{
		totalg = pasg * g;
		totalm = pasm * m;
		totalch = pasch * ch;
		totalpan = npan * pan;
		totaldia = totalg + totalm + totalch + totalpan; 
		printf("La venta total de los pasteles grandes fue de:%i\n",totalg);
		printf("La venta total de los pasteles medianos fue de:%i\n",totalm);
		printf("La venta total de los pasteles chicos fueron de:%i\n",totalch);
		printf("La venta total de los panes fueron de:%i\n",totalpan);
		printf("Las ventas del dia de hoy fueron de:%i",totaldia);
	}
}
