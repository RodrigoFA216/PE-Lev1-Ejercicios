#include<stdio.h>
main(){
	int H;
	printf("\n Ingresa el numero de hidrogenos \n");
	scanf("%i",&H);
	
		if(H==1){
			printf("\n Tu compuesto es un Alcano \n");
		}	
		else{
			if(H==2){
	    		printf("\n Tu compuesto es un Alqueno");
				}
		} 	
	if(H==3){ 		
	   	printf("\n Tu compuesto es un Alquino");
	} 
	else{
		if(H>3){
			printf("numero de hidrogenos no validos");
		}
	}
	if(H<0){
		printf("numero de hidrogenos no valido");
	}
}
