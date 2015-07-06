//Manuel Anabalon Miranda //
//19.305.268-   //


#include<stdio.h>         // librerias //
#include<string.h>
#define MAX 1000


int main(){

    int i,t,N,P=1;           // tamaño del arreglo //
    int resta[1];
    char  restriccion[MAX];      // arreglo maximo de las variables
    int *psub1, *psub2, *psub3;
    int inicio[1], sobra[1];
    char *numero;                     // puntero de la cadena //
    numero=&restriccion[0];
    psub1=&inicio[0];
    psub2=&sobra[0];
    psub3=&resta[0];


    FILE *in = fopen("entrada.ent", "A");
    FILE *exit = fopen("salida.sal", "B");


    if(in==NULL) return 1;
    fscanf(in, "%d %s", &N, &restriccion);      // aqui se lee el archivo de texto //

    if(N>=3){

    inicio[0]=*numero-48;

    for(i=1; i<N; i++){

        sobra[0]=sobra[0]+(*(numero + i)- 48);

    }

    t=*psub1-*psub2;

    if(t<0) t=t*(-1);

    while(P<N){

        *psub1=*psub1+(*(numero+P) -48);

        *psub2=*psub2-(*(numero+P)-48);

        *psub3=*psub1-*psub2;

        if(*psub3<0) *psub3=*psub3*(-1);

        if(*psub3<t) t=*psub3;

        P++;
    }
    if(exit==NULL) return 1;
     fprintf(exit, "%d\n", t);       // *salida del texto de salida //
     fclose(exit);
     fclose(exit);
    }
    else printf("\n");
}
