#include<stdio.h>
#include<math.h>

main(){
	float salario;
    printf("Ingrese su salario:");
    scanf("%f",&salario); 
	
	if(salario<18000){
		salario=salario*1.12;
	    printf("\n Su salario es: $%.2f",salario);
	}
	else if(salario>=18000&&salario<=30000){
		salario=salario*1.08;
	    printf("\n Su salario es: $%.2f",salario);
	}
	else if(salario>30000&&salario<=50000){
		salario=salario*1.07;
	    printf("\n Su salario es: $%.2f",salario);
	}
	else if(salario>50000){
    	salario=salario*1.06;
	    printf("\n Su salario es: $%.2f",salario);
    }
}