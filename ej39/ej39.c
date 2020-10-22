#include <stdio.h>
#include <stdlib.h>
struct data{
	char desc[60];
    unsigned char potencia;
    unsigned int estado;
};
struct lista {
	struct data datos;
    struct lista *l;
};
int menu(void);
int main()
{
	struct lista *p=NULL, *u=NULL, *aux, *r;
	int op,i,x, id=0;
	FILE* fp;
do{
	
	switch(op=menu())
	{
		case 1:
			aux=(struct lista *)malloc(sizeof(struct lista));
			if(aux)
			{
				printf("\nIngrese medicion de potencia: ");
				scanf("%d",&aux->datos.potencia);
				printf("\nIngrese descripcion: ");
				scanf("%s",&aux->datos.desc);
				x=aux->datos.desc[0];
				printf("\nLa primera letra de la descripcion es %c",x);
				aux->datos.estado=x*aux->datos.potencia;
				printf("\nEl estado vale %i",aux->datos.estado);
				if(p==NULL)
				{
					p=u=aux;
					u->l=NULL;
					printf("\nPrimer elemento");
					getch();
					id=id+1;
				}
				else{
					r=p;
					
					{
						if(r->datos.potencia < aux->datos.potencia)
						{
							printf("\nPrimer lugar");
							getch();
							aux->l=p;
							p=aux;
							id=id+1;
							printf("\nSu medicion tiene una identificacion %d",id);
							break;
						}
						while(r->l)
						{
						if(r->l->datos.potencia > aux->datos.potencia)
						{
						r=r->l;
						id=id+1;
						printf("\nSu medicion tiene una identificacion %d",id);
						}else
						break;	
					    }
						if(r==u)
						{
							printf("\nUltimo lugar");
							getch();
							u->l=aux;
							u=aux;
							u->l=NULL;
							id=id+1;
							printf("\nSu medicion tiene una identificacion %d",id);
							break;
						}
						printf("\nOtro lugar");
						getch();
						aux->l=r->l;
						r->l=aux;
						id=id+1;
						printf("\nSu medicion tiene una identificacion %d",id);
						break;
					}
				}
				printf("\nSu medicion tiene una identificacion %d",id);
			}else{
				printf("\nMemoria insuficiente");
			}
			fp= fopen("potencia.dat","wb");
			if(fp==NULL){
			printf("\nNo se pudo crear potencia.dat");
		}else {
		if(p){
		while(p){
			fwrite(&aux->datos,sizeof(struct data),1,fp);
			fclose(fp);
			p=p->l;
			aux=p;
			free(aux);
	}
    }else {
			printf("\nNo hay datos para cargar");
			fclose(fp);
}
}
			
			case 2:		
			aux=p;
		while(aux){
			printf("\n %i",aux->datos.potencia);
			aux=aux->l;
		}
		getch();
		break;					
			}
	}while(op!=3);
	return 0;
}
int menu(void){
	int i;
	printf("\n1.Agregar");
	printf("\n2.Mostrar");
	printf("\n3.Salir");
	scanf("%i",&i);
	return i;
}