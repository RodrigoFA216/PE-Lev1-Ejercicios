#include<stdio.h>

main(){
	float Y, f1, f2, f3, f4;
	printf("Ingresa el valor de Y: ");
	scanf("%f", &Y);
    if(Y==0){
		printf("El valor de Y no puede ser 0 ya que se indeterminaria en el denominador");
	}
	if(Y>0 && Y<=10){
		f1= (4/Y)-Y;
		printf("Los valores son, \nY= %.2f \nX= %.2f",Y,f1);
    }
    if(Y<10.9 && Y>10.1){
    	f2= (Y*Y*Y)-12;
    printf("Los valores son, \nY= %.2f \nX= %.2f",Y,f2);
    }
    if(Y<=25){
    	f2= (Y*Y*Y)-12;
    printf("Los valores son, \nY= %.2f \nX= %.2f",Y,f2);
    }
    if(Y>=25.1 && Y<=50){
    	f3= ((Y*Y)+((Y*Y*Y)-18));
    printf("Los valores son, \nY= %.2f \nX= %.2f",Y,f3);
    }
    if(Y>50){
    	printf("Los valores son, \nY= %.2f \nX=0 ", Y);
	}
}
