#include<stdio.h>
main(){
	float L1, L2, L3;
	printf("\n Por favor ingrese los tres lados de su triangulo");
	scanf("%f %f %f" ,&L1,&L2,&L3);
	if(L1==L2&&L2==L3){
		printf("El triangulo es Equilatero");
    }
	if(L1==L2&&L2!=L3 ){
	  printf("El triangulo es Isoceles");
    }
	if(L1!=L2&&L2==L3){
	    printf("El triangulo es Isoceles");
 	}
	if(L1==L3&&L1!=L2){
		printf("El triangulo es Isoceles");
    }
    if(L1!=L2&&L2!=L3)  {
    	printf("El triangulo es Escaleno");
	}
}
