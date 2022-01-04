#include<stdio.h>
int main(){
	int horasextra,salario,salariototal,categoria;
	printf("\nIngresa el salario:");
	scanf("%i",&salario);
	printf("\nCuantas horas extra trabajo?");
	scanf("%i",&horasextra);
		if (horasextra<=30){
			printf("\nQue categoria es?",categoria);
			scanf("%i",&categoria);
		if (categoria==1){
			salariototal=horasextra*40+salario;
			printf("\nEl salario total de el categoria 1 es:%i",salariototal);
		}		
		if (categoria==2){
			salariototal=horasextra*50+salario;
			printf("\nEl salario total de el categoria 2 es:%i",salariototal);
		}
		if (categoria==3){
			salariototal=horasextra*85+salario;
			printf("\nEl salario total de el categoria 3 es:%i",salariototal);
		}
		if(categoria==4){
			salariototal=salario;
			printf("\nEl salario total de el categoria 4 es:%i",salariototal);
			}
			}
		if(horasextra>30){
			printf("\nQue categoria es?",categoria);
			scanf("%i",&categoria);
		}
		if (categoria==1){
			salariototal=1200+salario;
			printf("\nEl salario total de el categoria 1 es:%i",salariototal);
		}		
		if (categoria==2){
			salariototal=1500+salario;
			printf("\nEl salario total de el categoria 2 es:%i",salariototal);
		}
		if (categoria==3){
			salariototal=2550+salario;
			printf("\nEl salario total de el categoria 3 es:%i",salariototal);
		}
		if(categoria==4){
			salariototal=salario;
			printf("\nEl salario total de el categoria 4 es:%i",salariototal);
		}
	return 0;
}
