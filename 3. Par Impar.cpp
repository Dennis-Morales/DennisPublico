//Mediante dos funciones recursivas, determine si un numero es par o impar
#include<stdio.h>
int impar(int);
int par(int x){
	if(x==0) return 1;
	else impar(x-1);
}
int impar(int x){
	if(x==0)return 0;
	else par(x-1);
}
int main(){
	int x;
	printf("Ingresa un numero: ");
	scanf("%d",&x);
	if(par(x)) printf("%d es par",x);
	else printf("%d es impar",x);
}
