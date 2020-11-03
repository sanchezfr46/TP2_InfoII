#include <stdio.h>
#include <stdlib.h>
typedef struct{
   long partNumber;
   long serialNumber;
   char descripcion[40];       
   char ubicacion[100]; 
   int cantidadDisponible;       
}repuestos41_t;
typedef struct{
   long numeroDeOrden;
   char cliente[40];       
   char descripciondeFalla[200];        
   char modelo[65];
   char fecha[10];
   char hora[10];
}repuestos_t;
typedef struct{
    repuestos_t repuesto;        
    int cantidad;
}extraccionRepuestos_t;
struct lista{
	repuestos_t dat;
	extraccionRepuestos_t pedido;
	struct lista *l;
};
struct cola {
	repuestos41_t x;
	struct cola *sig,*ant;
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
if(au){
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
}//inicio ej 44
extraccionRepuestos_t orden;
printf("\nQue desea extraer?");
scanf("%s",&orden.repuesto.modelo);
if(orden.repuesto.modelo==au->datos.modelo){
	orden.repuesto.cliente==au->datos.cliente;
	orden.repuesto.descripciondeFalla==au->datos.descripciondeFalla;
	orden.repuesto.fecha==au->datos.fecha;
	orden.repuesto.hora==au->datos.hora;
	orden.repuesto.numeroDeOrden==au->datos.numeroDeOrden;
}
if(orden.repuesto.modelo==au->datos.modelo){
	orden.cantidad=orden.cantidad+1;
} else{
	printf("El modelo que desea extraer no se encuentra disponible");
}
	struct lista *p2=NULL, *u2=NULL, *aux2, *r2;
aux2=(struct lista *)malloc(sizeof(struct lista));
			if(aux2)
			{
				orden.repuesto.modelo==aux2->pedido.repuesto.modelo;
				orden.cantidad=aux->pedido.cantidad;
				if(p2==NULL)
				{
					p2=u2=aux2;
					u2->l=NULL;
					printf("\nPrimer elemento");
					getch();
				}
				else{
					r2=p2;
					
						if(r2->pedido.cantidad < aux2->pedido.cantidad)
						{
							printf("\nPrimer lugar");
							getch();
							aux2->l=p2;
							p2=aux2;
							
						}
						while(r2->l)
						{
						if(r2->l->pedido.cantidad > aux2->pedido.cantidad)
						r2=r2->l;
							
						}
						if(r2==u2)
						{
							printf("\nUltimo lugar");
							getch();
							u2->l=aux2;
							u2=aux2;
							u2->l=NULL;
							
						}
						printf("\nOtro lugar");
						getch();
						aux2->l=r2->l;
						r2->l=aux2;
						
					
				}
								}
								
	//fin 44, inicio 45
	FILE *ff;
	ff=fopen("stock.dat","rb+");
	repuestos41_t stock;
	fread(&stock,sizeof(repuestos41_t),1,ff);
	struct cola *ppp=NULL, *uuu=NULL, *auu;
	if(orden.cantidad>stock.cantidadDisponible){	
		auu=(struct cola*)malloc(sizeof(struct cola));
				if(auu){
					auu->x.cantidadDisponible==orden.cantidad;
				 auu->x.partNumber==stock.partNumber;
					if(ppp==NULL){
						ppp=uuu=auu;
						ppp->ant=NULL;
					}else {
						uuu->sig=aux;
						auu->ant=u;
						uuu=auu;
					}
					uuu->sig=NULL;
				}else{
					printf("Memoria insuficiente");
					
				}
				auu=ppp;
				while(auu){
					printf("\n%ld",auu->x.partNumber);
					auu=auu->sig;
				printf("\nStock insuficiente, habra demoras");
				
	}
	} else{
		stock.cantidadDisponible=stock.cantidadDisponible-1;
	}
	//fin 45
	
	return 0;
}