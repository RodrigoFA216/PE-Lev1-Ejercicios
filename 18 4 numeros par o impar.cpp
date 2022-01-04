#include<stdio.h>
main(){
	int n1,n2,n3,n4;
	
	printf("\n Ingresa tu primer numero \n");
	scanf("%d",&n1);
	
	printf("\n Ingresa tu segundo numero \n");
	scanf("%d",&n2);
	
	printf("\n Ingresa tu tercer numero \n");
	scanf("%d",&n3);
	
	printf("\n Ingresa tu cuarto numero \n");
	scanf("%d",&n4);
	
	if (n1%2==0 && n2%2==0 && n3%2==0 && n4%2==0){
    	printf("Tu numero es par");
	}
	else if(n1%2!=0 || n2%2!=0 || n3%2!=0 || n4%2!=0){
		printf("Tu numero es impar");
	}		
}