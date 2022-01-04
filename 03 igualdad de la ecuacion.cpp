//un programa que permita la igualdad (t/P)n y tn/pn
#include<stdio.h>
#include<math.h>
main(){
	float T, P, N, TP, TP2, den2ec, num2ec, den2ec2, numdenec2;
	printf("inserte el valor de P \n");
		scanf("%f", &P);
	printf("inserte el valor de T \n");
		scanf("%f", &T);
	printf("inserte la potencia de la ecuacion \n");
		scanf("%f", &N);
	TP=T/P;
	TP2=pow(TP,N);
	den2ec=pow(T,N);
	num2ec=pow(P,N);
	numdenec2=den2ec/num2ec;
	printf("la igualdad de la forma (T/P) elevado N es %f \n", TP2);
	printf("la igualdad de la forma (T)n/(P)n %f \n", numdenec2);
}
