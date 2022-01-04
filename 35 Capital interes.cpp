/* Capital con interes*/
#include<stdio.h>
#include<conio.h>

main(){
	float p_int,cap,tot_i,capf;
	char op;
	printf("BANCO NACIONAL\n Ingresa tu capital");
	scanf("%f" ,&cap);
	printf("Ingresa la tasa de interes");
	scanf("%f" ,&p_int);
	tot_i=cap*p_int;
	if(tot_i>7000){
		printf("Deseas reinvertir tu capital? \n S=Si \n N=No");
		scanf("%s",&op);
		switch(op){
			case 'S':capf=cap+tot_i;
				printf("Tu inversion sera $%f \n GRACIAS POR TU PREFERENCIA" ,capf);
				break;
			case 'N' : 
				printf("TU CAPIAL ESTA SEGURO \n GRACIAS POR TU PREFERENCIA");
				break;
		}
	}
	else printf("TU CAPITAL ESTA SEGURO \n GRACIAS POR TU PREFERENCIA");
	getch();
	return 0;
}
