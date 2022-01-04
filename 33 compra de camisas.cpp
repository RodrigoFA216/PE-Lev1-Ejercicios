
#include <stdio.h>
#include <conio.h>

main(){
	int camisas;
	float precio,tot_comp,tot_pag;
	printf("\nIngresa le precio de la camisa \n");
	scanf("%f",&precio);
	printf("Ingresa cuantas  camisas se compraran \n");
	scanf("%d",&camisas);
	tot_comp=camisas*precio;
	if(camisas>=3){
		tot_pag=tot_comp-tot_comp*.2; 
	}
	else{
		tot_pag=tot_comp-tot_comp*.1;
	}
	printf("El total a pagar es de $%f",tot_pag);
	return 0;
}
