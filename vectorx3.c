#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2= NULL;

    char buffer[100];
    double pi;
    int tempo,aux;
    
    
    
    archivo=fopen("vector.txt","r+");
    archivo2=fopen("multiplicacion.txt","w");
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
        fscanf(archivo,"%d",&tempo);
        aux=tempo*3;
    fprintf(archivo2,"%d\n", aux);
    }
     fclose(archivo);
     fclose(archivo2);
     return 0;
}