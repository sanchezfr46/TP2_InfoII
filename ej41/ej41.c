#include<stdio.h>
#include<stdlib.h>
typedef struct {
   long partNumber;
   long serialNumber;
   char descripcion[40];       
   char ubicacion[100];        
}repuestos_t;
struct lista{
	repuestos_t datos;
	int i;
	struct lista *l;
};
int main()
{
	
	struct lista *p=NULL, *u=NULL, *aux, *r;
	int x;
	FILE *fp;
	
			do{
				aux=(struct lista *)malloc(sizeof(struct lista));
			if(aux)
			{
				printf("\nIngrese partNumber:");
				scanf("%ld",&aux->datos.partNumber);
				printf("\nIngrese serialNumber:");
				scanf("%ld",&aux->datos.serialNumber);
				printf("\nIngrese descripcion:");
				scanf("%s",&aux->datos.descripcion);
				aux->i=aux->datos.descripcion[0];
				printf("\nIngrese ubicacion:");
				scanf("%s",&aux->datos.ubicacion);
				if(p==NULL)
				{
					p=u=aux;
					u->l=NULL;
					printf("\nPrimer elemento");
					getch();
				}
				else{
					r=p;
				
						if(r->i > aux->i)
						{
							printf("\nPrimer lugar");
							getch();
							aux->l=p;
							p=aux;
							break;
						}
						while(r->l)
						{
						if(r->l->i < aux->i)
						r=r->l;
						else
						break;	
						}
						if(r==u)
						{
							printf("\nUltimo lugar");
							getch();
							u->l=aux;
							u=aux;
							u->l=NULL;
							break;
						}
						printf("\nOtro lugar");
						getch();
						aux->l=r->l;
						r->l=aux;
						break;
					
				}
					
			aux=p;
		while(aux){
			printf("\n %ld",aux->datos.partNumber);
			printf("\n %ld",aux->datos.serialNumber);
			printf("\n %s",aux->datos.descripcion);
			printf("\n %s",aux->datos.ubicacion);
			aux=aux->l;
		}
		getch();
		break;					
		}
		printf("1.Seguir 2.Salir");
		scanf("%d",&x);
			}while(x=1);
				fp=fopen("stock.dat","wb");
				if(fp==NULL){
			printf("\nNo se pudo crear stock.dat");
		}else {
		if(p){
		while(p){
			fwrite(&aux->datos,sizeof(struct lista),1,fp);
			fclose(fp);
			p=p->l;
			aux=p;
			free(aux);
	}
    }else {
			printf("\n No hay datos para cargar");
			fclose(fp);
}
}
			
            
	return 0;
}
