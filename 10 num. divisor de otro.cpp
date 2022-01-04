//determinar si un numero es divisible entre otro//
#include<stdio.h>
main(){
	int a,b;
	printf("La forma en la que se determina si el numero entero es divisible entre otro es A %c B\n",246);
   printf("Ingrese 2 numeros: \n");
   printf("EL valor de A:");
   scanf("%i", &a);
   printf("El valor de B:");
   scanf("%i",&b);
   if((a % b == 0) && (b!=0)){
      printf("%d es divisor de %d",a,b);
   }else{
      printf("%d no es divisor de %d",b,a);
   }
   return 0;
}
