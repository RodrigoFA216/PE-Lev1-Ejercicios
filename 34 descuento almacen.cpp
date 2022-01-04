/*Descuento en almacen*/

#include<stdio.h>
#include<conio.h>

main(){
	float Compra,Desc,tot_pag;
	printf("LINDA ALMACEN \n Ingresa el total de tu compra");
	scanf("%f" ,&Compra);
	if(Compra>1000){
		Desc=Compra*.2;
	}
	else Desc=0;
	tot_pag=Compra-Desc;
	printf("Total a pagar: \n$%f \n GRACIAS POR TU PREFERENCA",tot_pag);
	getch();
	return 0;
}
