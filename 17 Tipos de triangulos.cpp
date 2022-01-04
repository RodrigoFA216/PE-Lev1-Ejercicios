#include<stdio.h>
#include<math.h>
main(){
	int a, b, c;
	float Area,Semiperimetro;
	float S,D1;

	printf("\n Ingrese el lado a");
    scanf("%d",&a);
            
	printf("\n Ingrese el lado b \n ");
	scanf("%d",&b);
       
    printf("\n Ingrese el lado c \n");
    scanf("%d",&c);

    Semiperimetro=a+b+c;
    S=Semiperimetro/2;
    D1 = S * (S-a) * (S-b) * (S-c);
    if(D1 > 0){
		printf(" \n Es un triangulo \n");
		if(a==b && b==c && a==c){
      		printf("\n El triangulo es equilatero \n");
		}
    	else{
    		if(a>b && a==c || b>a && b==c || c>a && c==b || a>c && c==b || b>c && b==a || c>b && c==a || b>a && a==c || c>a && a==b){
   				printf("\n El triangulo es isosceles \n");
			}
 			else{
 				printf("\n El triangulo es escaleno");
			}
		}
		printf("\n El area del triangulo es %f", Area=sqrt(D1));
	}
	else{
		printf(" \n No es un triangulo \n");	
	}
}