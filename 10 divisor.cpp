#include<stdio.h>
#include<iostream>
#include<math.h>
main(){ 
	int N1,N2;
 	printf("\nIngrese un numero:\n");
 	scanf("%i",&N1);
 	printf("\n Ingrese un segundo numero: \n");
 	scanf("%i",&N2);
 	
 	if(N1%N2==0){
		printf("\n Su primer valor es divisor del segundo\n");
	}
	else{ 	
		if(N2%N1==0){
	 		printf("\n Su segundo valor es divisor del primero\n");
		} 
		else{
		 	printf("\n Ningun valor es divisor del otro\n");
		}
	}
	return 0;
}