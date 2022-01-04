
#include <stdio.h>
#include <conio.h>

#define e1 25
#define e2 16
#define e3 20
#define e4 32
main(){
	int tipoenf,edad,dias,costot;
	printf("Hospital cerca del cielo \ n �Que  enfermedad tienes?\n1=Intoxicacion \n2=Gripa \n3=Alergia \n4=Diabetes ");
	scanf("%i",&tipoenf);
	
	printf("dias hospitalizado ");
	scanf("%d",&dias);
	
	
	printf(" edad ");
	scanf("%d",&edad);
	
	switch(tipoenf){
		case 1:
			costot=dias*e1;
			break;
		case 2:
			costot=dias*e2;
			break;
		case 3:
			costot=dias*e3;
			break;
		case 4:
			costot=dias*e4;
			break;
	}
	if((edad>=14)&&(edad<=22)){
		costot=costot*1.1;
	}
	printf("El costo de tu tratamiento y estancia es de %d",costot);
	getch();
	return 0;
	
	
	
}
