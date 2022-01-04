/*Llantas marca X*/
#include <stdio.h>
#include <conio.h>
main(){
	int n_ll;
	float tot;
	printf("Llantas x\n Numero de las llantas");
	scanf("%d" ,&n_ll);
	if(n_ll<5){
		tot=n_ll*300;
		printf("El precio de cada llanta es de $300.00\nTotal a pagar :\n $%f \n GRACIAS POR TU PREFERENCIA" ,tot);
	}
	if ((n_ll>=5)&&(n_ll<=9)){
		tot=n_ll*250;
		printf("El prcio de cada llanta es de $250.00 \n Total a pagar:\n $%f \n GRACIAS POR TU PREFERENCIA" ,tot);
	}
	if (n_ll>10){
		tot=n_ll*200; 
		printf("El precio de cada llanta es de $200.00\n Total a pagar: \n %f\ GRACIAS POR TU PREFERENCIA" ,tot);
	}
	getch();
	return 0;
} 
