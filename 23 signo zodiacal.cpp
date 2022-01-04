//Conocer el signo zodiacal mediante su fecha de nacimiento//
#include <stdio.h>
#include <math.h>

int main(){
	int mes,dia;

	printf("Introduzca su mes de nacimiento(DE 1 A 12): ");
	scanf("%i",&mes);
	if (mes>=1 && mes<=12){
		if (mes==1){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if (dia>=1 && dia<=19){
				printf("Su signo es CAPRICORNIO.\n");
			}
			if(dia>=20 && dia<=31){
				printf("Su signo es ACUARIO.\n\n");
			}
		}
		if(mes==2){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=18){
					printf("Su signo es ACUARIO.\n\n");
				}
			if(dia>=19 && dia<=28){
				printf("Su signo es PISCIS.\n\n");
			}
		}
		if (mes==3){
		printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
		scanf("%i",&dia);
			if(dia>=1 && dia<=20){
				printf("Su signo es PISCIS.\n\n");
			}
			if(dia>=21 && dia<=31){
				printf("Su signo es ARIES");
			}
		}
		else if(mes==4){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=21){
				printf("Su signo es ARIES.\n\n");
			}	
			if(dia>=22 && dia<=31){
				printf("Su signo es TAURO.\n\n");
			}
		}
		else if(mes==5){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=20){
				printf("Su signo es TAURO.\n\n");
			}
			if(dia>=21 && dia<=30){
				printf("Su signo es GEMINIS.\n\n");
			}
		}
		else if(mes==6){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=20){
				printf("Su sigo es GEMINIS.\n\n");	
			}	
			if (dia>=21 && dia<=30){
				printf("Su signo es CANCER.\n\n");
			}
		}
		else if(mes==7){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=22){
				printf("Su signo es CANCER.\n\n");
			}
			else if(dia>=23 && dia<=31){
				printf("Su signo es LEO.\n\n");
			}
		}
		else if(mes==8){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=22){
				printf("Su signo es LEO.\n\n");
			}	
			else if(dia>=23 && dia<=31){
				printf("Su signo es VIRGO.\n\n");
			}		
		}
		if(mes==9){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=22){
				printf("Su signo es VIRGO.\n\n");
			}
			else if(dia>=23 && dia<=30){
				printf("Su signo es LIBRA. \n\n");
			}
		}
		if(mes==10){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=23){
				printf("Su signo es LIBRA. \n\n");
			}
			else if(dia>=24 && dia<=31){
				printf("Su signo es ESCORPIO.\n\n");
			}
		}
		if(mes==11){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if (dia>=1 && dia<=21){
				printf("Su signo es ESCORPIO.\n\n");
			}
			else if (dia>=22 && dia<=30){
				printf("Su signo es SAGITARIO.\n\n");
			}	
		}
		if(mes==12){
			printf("Introduzca su dia de nacimiento (entre 1 Y 31):\n");
			scanf("%i",&dia);
			if(dia>=1 && dia<=22){
				printf("Su signo es SAGITARIO.\n\n");
			}
			else if(dia>=23 && dia<=31){
				printf("Su signo es CAPRICORNIO.\n");
			}
		}				
	}
	else{
		printf("No existe un mes mayor a doce");
	}
	return 0;	
}




