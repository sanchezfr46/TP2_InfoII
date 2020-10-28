#include <stdio.h>
#include <stdlib.h>
typedef struct{
   long partNumber;
   long serialNumber;
   char descripcion[40];       
   char ubicacion[100];        
}repuestos_t;
struct cola {
	repuestos_t datos;
	struct cola *sig,*ant;
	char b; //b='a', alta, b='b' baja;
};
int main ()
{
struct cola *p=NULL, *u=NULL, *aux;
FILE *fp,*fq,*fr;
aux->b='a';
fp=fopen("stock.dat","rb");
fread(&aux->datos,sizeof(struct cola),1,fp);
printf("partNumber:",aux->datos.partNumber);
if(aux->datos.partNumber=1234){
	if(aux->datos.serialNumber=aux->datos.serialNumber|0b00101000){
		aux=(struct cola*)malloc(sizeof(struct cola));
				if(aux){
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
				aux->b='b';
	}
	if(aux->b='a'){ //baja fisica 
		fq=fopen("stockActualizado.dat","wb");
		fwrite(&aux->datos,sizeof(struct cola),1,fq);
	}
	aux=u;
				while(aux){
					fr=fopen("inversa.dat","wb");
					fwrite(&aux->datos,sizeof(struct cola),1,fr);
					aux=aux->ant;
	
}
}
return 0;
}