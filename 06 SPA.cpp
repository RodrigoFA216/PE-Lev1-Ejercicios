#include<stdio.h>
main(){
	int edad, tipot, t1=2800, t2=1950, t3= 2500, t4=1150;
	float d115, d215, d315, d415, d125, d225, d325, d425;
	
	printf("Ingrese la edad del cliente: ");
	scanf("%i", &edad);
	printf("Elija del 1 al 4 el tratamiento a tomar: ");
	scanf("%i", &tipot);

	if(edad>25 && edad<60){
		if(tipot==1){
			printf("El costo del tratamiento sera de: %i", t1);
		}
		if(tipot==2){
			printf("El costo del tratamiento sera de : %i", t2);
		}
		if(tipot==3){
			printf("El costo del tratamiento sera de: %i", t3);
		}
		if(tipot==4){
			printf("El costo del tratamiento sera de : %i", t4);
		}
    }
	if(edad<=25){
		if(tipot==1){
			d115= t1-420.0;
			printf("El costo del tratamiento sera de: %.2f", d115);
		}
		if(tipot==2){
			d215= t2-292.5;
			printf("El costo del tratamiento sera de : %.2f", d215);
		}
		if(tipot==3){
			d315=t3-375.0;
			printf("El costo del tratamiento sera de: %.2f", d315);
		}
		if(tipot==4){
			d415=t4-172.5;
			printf("El costo del tratamiento sera de : %.2f", d415);
		}
    }  
	if(edad>=60){
		if(tipot==1){
			d125= t1-700.0;
			printf("El costo del tratamiento sera de: %.2f", d125);
		}
		if(tipot==2){
			d225= t2-487.5;
			printf("El costo del tratamiento sera de : %.2f", d225);
		}
		if(tipot==3){
			d325=t3-625.0;
			printf("El costo del tratamiento sera de: %.2f", d325);
		}
		if(tipot==4){
			d425=t4-287.50;
			printf("El costo del tratamiento sera de : %.2f", d425);
		}    
    }
}


	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
