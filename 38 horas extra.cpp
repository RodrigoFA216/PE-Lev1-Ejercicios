#include <stdio.h>
#include <conio.h>
main(){
	int H;
	float ph,tp,he,pe,pd,pt;
	printf("EMPRESA PATITO \nIngresa el pago por la hora trabajada ");
	scanf("%f",&ph);
	
	printf("Ingresa el numero de horas trabajadas ");
	scanf("%d",&H);
	
	if(H<=40){
		tp=H*ph;		
	}
	else{
		he=H-40;
		if(he<=8){
			pe=he*ph*2;
		}
		else{
			pd=8*ph*2;
			pt=(he-8)*ph*3;
			pe=pd+pt;
		}
		tp= pe + 40*ph;
	}
	printf("El total a pagar en el sueldo es: \n$%f",tp);
	getch();
	return 0;
}
