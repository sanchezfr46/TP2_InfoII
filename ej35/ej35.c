#include <stdio.h>
#include <stdlib.h>
int menu (void);
int main() {
	struct data {
		char nombre[20], apellido [20], correo[40];
		int edad;
		long telefono; 
	};
	struct pila {
		struct data datos; 
		struct pila *l;
	};
	struct pila *p=NULL, *aux;
	int op,i,x; 
	FILE *fp;
		do{
	aux = (struct pila *) malloc(sizeof(struct pila));
 	if(aux) {
		printf("\n Ingrese nombre:");
		scanf("%s",&aux->datos.nombre);
		printf("elemento %s agregado correctamente",aux->datos.nombre);
		printf("\n Ingrese apellido:");
		scanf("%s",&aux->datos.apellido);
		printf("elemento %s agregado correctamente",aux->datos.apellido);
		printf("\n Ingrese edad:");
		scanf("%d",&aux->datos.edad);
		printf("elemento %i agregado correctamente",aux->datos.edad);
		printf("\n Ingrese numero de telefono:");
		scanf("%ld",&aux->datos.telefono);
		printf("elemento %ld agregado correctamente",aux->datos.telefono);
		printf("\n Ingrese el correo:");
		scanf("%s",&aux->datos.correo);
		printf("elemento %s agregado correctamente",aux->datos.correo);
		aux->l = p;
	    p=aux;
	    fp=fopen("contactos.dat","wb");
	if(fp==NULL){
			printf("\nNo se pudo crear contactos.dat");
		}else {
		if(p){
		while(p){
			if(aux->datos.edad>21)
			fwrite(&aux->datos,sizeof(struct data),1,fp);
			fclose(fp);
			p=p->l;
			aux=p;
			free(aux);
	}
    }else {
			printf("\nPila vacia");
			fclose(fp);
}
}
		}else {
			printf("\nMemoria insuficiente");
			system("pause");
		}
		 
	
	    printf("\nPresione 1 si no desea agregar mas datos, u otro boton si desea continuar");
        scanf("%d",&x);
}while(x!=1);
}


