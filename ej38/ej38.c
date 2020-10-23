#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int menu(void);
struct cola {
	struct cola *l;
};
int main(){
	struct cola *p=NULL, *u=NULL, *aux;
	int i,b;
	char s=sin(b)*127;
	for(i=0;i<90;i=i+5){
		aux=(struct cola*)malloc(sizeof(struct cola));
				if(aux){
					b=i*0,0174;//3,14/180
					printf("\ndato: %d",s);
					if(p==NULL){
						p=u=aux;
					}else {
						u->l=aux;
						u=aux;
					}
					u->l=NULL;
					
				}else{
					printf("Memoria insuficiente");
				}
	}
	for(i=90;i>0;i=i-5){
		if(p){
						printf("\ndato: %d",s);
						aux=p;
						p=p->l;
						free(aux);
						getch();
						
					}else{
						printf("\nNo hay datos para mostrar");
						
					}
					
	}
	s=s|0b10000000;
		for(i=0;i<90;i=i+5){
		aux=(struct cola*)malloc(sizeof(struct cola));
				if(aux){
					printf("\ndato: %i",s);
					if(p==NULL){
						p=u=aux;
					}else {
						u->l=aux;
						u=aux;
					}
					u->l=NULL;
					
				}else{
					printf("Memoria insuficiente");
				}

}

	for(i=90;i>0;i=i-5){
		if(p){
						printf("\ndato: %d",s);
						aux=p;
						p=p->l;
						free(aux);
						getch();
						
					}else{
						printf("\nNo hay datos para mostrar");
						
					}
					
	}
	
	return 0;
}