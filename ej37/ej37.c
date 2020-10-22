#include <stdio.h>
#include <stdlib.h>
struct pila* f37(long,struct pila*,struct pila*);
    struct d{                                                                                            
long clave; //Clave o Id del registro

char d[30]; // Descripcion                                                                                          
unsigned char tipo; //Tipo de datos como entero sin signo                                                                                                                                            
char b; //'A':Alta 'B':Baja   
};
	   struct pila {
		struct d datos;
		int nreg; 
		struct pila *l;
	};
int main() {
	struct pila *p=NULL, *aux;  
	FILE* fp=fopen("datos.dat","rb");
	if(fp==NULL){
		printf("\nNo se encontro el archivo datos. dat");
	}else {
		fread(&aux->datos,sizeof(struct pila),1,fp);
	}
	int cl;
	printf("\nIngrese clave: ");
	scanf("%d",&cl);
	f37(cl,aux,aux->l);
	print("Descripcion:%s",&aux->datos.d);
	                                                                                                                                                                  
return 1;
}

struct pila* f37(long clave,struct pila *au,struct pila *ll){
	int nreg=0,x; 
	struct pila *p=NULL;
	if(clave!=au->datos.clave){
		printf("\nRegistro no encontrado");
	}else {
		if(au->datos.tipo|(1<<5)){
			do{
	au = (struct pila *) malloc(sizeof(struct pila));
 	if(au) {
 		while(x!=1){
 			nreg=nreg+1;
 		    clave=au->datos.clave;
		    nreg=au->nreg;
		    au->l = p;
	        p=au;
		    }
		}else {
			printf("\nMemoria insuficiente");
			system("pause");
		}
	    printf("\n1. Salir 2.Continuar");
        scanf("%d",&x);
}while(x!=1);
		}
	}
	return ll;
	}

