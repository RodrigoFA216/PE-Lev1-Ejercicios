#include<stdio.h>
#include<math.h>
int main(){
	int sonidos;
	float temperatura;
	printf("\ncuantas veces hace sonidos el grillo?:");
	scanf("%i",&sonidos);
	if (temperatura>0){
	temperatura=sonidos/4+40;
	}
	printf("\nla temperatura en grados es:%f",temperatura);
	scanf("%f",&temperatura);
	return 0;
}
