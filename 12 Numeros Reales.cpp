#include<stdio.h>
main(){
	float Num1 ,Num2 ,Num3;
	printf("\n Por favor ingrese los tres numeros");
	scanf("%f %f %f" , &Num1, &Num2, &Num3 );
	if(Num1>Num2 && Num1>Num3){  
		printf("el maximo numero es: %f" ,Num1);
	}  
	if(Num2>Num1 && Num2>Num3){
	  	printf("el maximo numero es: %f" ,Num2);
	}
	if(Num3>Num2 && Num3>Num1){
		printf("el maximo numero es: %f" ,Num3);
	} 
}
