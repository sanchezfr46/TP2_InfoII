#include<stdio.h>
#include<stdlib.h>
struct data{
	char apellido[20];
	int i;
};
struct lista{
	struct data datos;
	struct lista *l;
};
int menu(void);
int main()
{
	
	struct lista *p=NULL, *u=NULL, *aux, *r;
	int op;
	FILE *fp,*fq;
do{
	
	switch(op=menu())
	{
		case 1:
			aux=(struct lista *)malloc(sizeof(struct lista));
			if(aux)
			{
				fp=fopen("contactos.dat","rb");
				fread(&aux->datos.apellido,sizeof(struct lista),1,fp);
				aux->datos.i=aux->datos.apellido[0]; //ordeno alfabeticamente aprovechando que en ascii, a tiene el codigo menor, b el segundo menor, etc.
				if(p==NULL)
				{
					p=u=aux;
					u->l=NULL;
					printf("\nPrimer elemento");
					getch();
				}
				else{
					r=p;
				
						if(r->datos.i > aux->datos.i)
						{
							printf("\nPrimer lugar");
							getch();
							aux->l=p;
							p=aux;
							break;
						}
						while(r->l)
						{
						if(r->l->datos.i < aux->datos.i)
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
				fq=fopen("contactos_ordenados.dat","wb");
				if(fq==NULL){
			printf("\nNo se pudo crear contactos.dat");
		}else {
		if(p){
		while(p){
			fwrite(&aux->datos.apellido,sizeof(struct lista),1,fp);
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
			case 2:		
			aux=p;
		while(aux){
			printf("\n %s",aux->datos.apellido);
			aux=aux->l;
		}
		getch();
		break;					
		}
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