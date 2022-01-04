/* 3 numeros que diga si estan en orden o no*/
#include<stdio.h>
#include<math.h>
main(){
	int a, b, c, d;
	printf("Introduzca tres valores \t");
	scanf("%f %f %f", &a, &b, &c);
	if(a<b&&b<c&&c>a){
		printf("Los numeros estan en orden acendente \n");
	}
	else{
		printf("los numeros no estan en orden acendente \n");
	}
}
