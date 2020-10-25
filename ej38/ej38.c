#include <stdio.h>
#include <stdlib.h>
#include<math.h>
struct cola {
	char muestra;
	struct cola *sig,*ant;
};
int main(){
	struct cola *p=NULL, *u=NULL, *aux;
	int  i;
	char s;
	for(i=0;i<=90;i=i+5){
		s=i*0,0174;//pi sobre 180
		aux=(struct cola*)malloc(sizeof(struct cola));
				if(aux){
					aux->muestra=sin(s);
					printf("\ndato: %lf",aux->muestra);
					
					if(p==NULL){
						p=u=aux;
						p->ant=NULL;
					}else {
						u->sig=aux;
						aux->ant=u;
						u=aux;
					}
					u->sig=NULL;
				}else{
					printf("Memoria insuficiente");
				}
	}
	printf("\n=========Ciclo + ==========");
printf("\n-------izq a der------");
		aux=p;
				while(aux){
					printf("\n%lf",aux->muestra);
					aux=aux->sig;
				}
	
	printf("\n-------der a izq------");

			aux=u;
				while(aux){
					printf("\n%lf",aux->muestra);
					aux=aux->ant;
					}
	printf("\n=========Ciclo - ==========");
	aux->muestra=aux->muestra|0b10000000;
	printf("\n-------izq a der------");
		aux=p;
				while(aux){
					printf("\n%lf",aux->muestra);
					aux=aux->sig;
				}
	
	printf("\n-------der a izq------");

			aux=u;
				while(aux){
					printf("\n%lf",aux->muestra);
					aux=aux->ant;
					}


	return 0;
}
