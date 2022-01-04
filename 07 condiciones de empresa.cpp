#include<stdio.h>
int main(){
	int A, C;
	printf("\n Ingrese sus a�os de experiencia: \n");
	scanf("%i",&A);
	printf("\n Ingrese su categoria sea: 3, 4 \n");
	scanf("%i",&C);
	if(A<5){
		printf("No cumple con la experiencia para esta Area");
	}
 	else{
 		printf("\n Usted cumple con las condiciones \n");
	} 
    if(A>=7) 	
     	printf("Usted puede ingresar con categoria 2");
}
