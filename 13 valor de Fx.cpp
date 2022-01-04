#include<stdio.h>
#include<math.h>
main(){
	int y,mod4;
	float y2, y3,f1, f2, f3, f4;
	printf("Ingrese el valor de Y: ");
	scanf("%i", &y);
	y2=y*y;
	y3=y*y*y;
	mod4= y%4;
	if(mod4==0){
		f1=y3;
		printf("\nEl resultado de la operacion es: %.2f", f1);
	}
	if(mod4==1){
	    f2= (y2-14)/y3;
		printf("\nEl resultado de la operacion es: %.4f", f2);
	}
	if(mod4==2){
		f3=y3+5;
		printf("\nEl resultado de la operacion es: %.2f", f3);
	}
	if(mod4==3){
		f4= sqrt(y);
		printf("\nEl resultado de la operacion es: %.4f", f4);
	}
}