#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void f40(int);
struct data{
	char desc[60];
    unsigned char potencia;
    unsigned int estado;
    int id;
};
struct pila{
	struct data datos;
	struct pila *l;
};

int main()
{
    int parametro;
    printf("Ingrese el id");
    scanf("%d",&parametro);
    f40(parametro);
    return 0;
}
void f40 (int iid){
	struct pila *p=NULL, *aux;
	int x, i, j; 
	char cadena[60];
	FILE *fp, *fq, *fr;
	fp=fopen("potencia.dat","rb+");
	if(fp==NULL){
			printf("\nNo se encontro potencia.dat");
		}else {
				fread(&aux->datos.desc,sizeof(struct pila),1,fp);
	            aux->datos.desc==cadena;
                while(cadena[i]!=' '){
                i++;
    }
    printf("La descripcion al reves es:\n");
    for (j=i-1; j>=0; j--){
        printf("%s", cadena[j]);
        cadena==aux->datos.desc;
        aux->datos.estado^aux->datos.estado(1<<3);
		if(p){
		while(p){
			fwrite(&aux->datos,sizeof(struct data),1,fp);
			fclose(fp);
			p=p->l;
			aux=p;
			free(aux);
	}
    }else {
			printf("\nNo hay mas datos para cargar");
			fclose(fp);
}
}    
        if(aux->datos.estado|aux->datos.estado(1<<0)){
        	if(datos.estado|datos.estado(1<<2)){
        		do{
	aux = (struct pila *) malloc(sizeof(struct pila));
 	if(aux) {
		fread(&aux->datos.potencia,sizeof(struct pila),1,fp);
		aux->l = p;
	    p=aux;
		}else {
			printf("\nMemoria insuficiente");
			system("pause");
		}
		 
	
	    printf("\n1. Salir 2.Continuar");
        scanf("%d",&x);
}while(x!=1);

			}
		}else {
			fr=fopen("salida.dat","wb+");
				if(fr==NULL){
			printf("\nNo se pudo crear salida.dat");
		}else {
		if(p){
		while(p){
			fwrite(&aux->datos,sizeof(struct data),1,fp);
			fclose(fr);
			p=p->l;
			aux=p;
			free(aux);
	}
    }else {
			printf("\nNo hay mas datos para cargar");
			fclose(fr);
}
}
			
		}

}