#include <stdio.h>
#include <stdlib.h>
typedef struct{
   long numeroDeOrden;
   char cliente[40];       
   char descripciondeFalla[200];        
   char modelo[65];
   char fecha[10];
   char hora[10];
}repuestos_t;
struct lista{
	repuestos_t dat;
	struct lista *l;
};
struct pila {
		repuestos_t datos; 
		struct pila *l;
};
int main(){
	struct lista *p=NULL, *u=NULL, *aux, *r;
	FILE *fp;
	int x;
	aux=(struct lista *)malloc(sizeof(struct lista));
			if(aux)
			{
				fp=fopen("Ordenes.dat","wb");
	            fread(&aux->dat,sizeof(struct lista),1,fp);
				if(p==NULL)
				{
					p=u=aux;
					u->l=NULL;
					printf("\nPrimer elemento");
					getch();
				}
				else{
					r=p;
					if(r->dat.fecha!=aux->dat.fecha){
						if(r->dat.fecha > aux->dat.fecha)
						{
							printf("\nPrimer lugar");
							getch();
							aux->l=p;
							p=aux;
							
						}
						while(r->l)
						{
						if(r->l->dat.fecha > aux->dat.fecha)
						r=r->l;
						}
						if(r==u)
						{
							printf("\nUltimo lugar");
							getch();
							u->l=aux;
							u=aux;
							u->l=NULL;
						}
						printf("\nOtro lugar");
						getch();
						aux->l=r->l;
						r->l=aux;
					} else {
						if(r->dat.hora < aux->dat.hora)
						{
							printf("\nPrimer lugar");
							getch();
							aux->l=p;
							p=aux;
							
						}
						while(r->l)
						{
						if(r->l->dat.hora < aux->dat.hora)
						r=r->l;
						}
						if(r==u)
						{
							printf("\nUltimo lugar");
							getch();
							u->l=aux;
							u=aux;
							u->l=NULL;
						}
						printf("\nOtro lugar");
						getch();
						aux->l=r->l;
						r->l=aux;
					}
						
					}
				} else {
					printf("\nMemoria insuficiente");
					getch();
				}
struct pila *pp=NULL, *au;
au=(struct pila*)malloc(sizeof(struct pila));
if(aux){
	do{
		au->datos.numeroDeOrden=aux->dat.numeroDeOrden;
		au->datos.cliente==aux->dat.cliente;
		au->datos.descripciondeFalla==aux->dat.descripciondeFalla;
		au->datos.fecha==aux->dat.fecha;
		au->datos.hora==aux->dat.hora;
		au->datos.modelo==aux->dat.modelo;
		au->l=pp;
		pp=au;
		printf("1.Seguir 2. Salir");
		scanf("%d",&x);
	}while(x!=1);
	
	
}else {
	printf("\nMemoria insuficiente");
	getch();
}
								
	
	return 0;
}
	
	