#include <stdio.h>
#include <string.h>
void concatenar(char *frase1, char *frase2,char frase3final[]){
    short cantLetras1,cantLetras2;
    cantLetras1=strlen(frase1);
    cantLetras2=strlen(frase2);
    short i=0;
    for(;i<cantLetras1;i++){
        frase3final[i]=frase1[i];
    }
    frase3final[i]=' ';
    i++;
    for (short j= 0; j < cantLetras2; j++){
        frase3final[i+j]=frase2[j];

    }
    frase3final[i + cantLetras2] = '\0';  

}


int main() {
    char frase1[]="hola";
    char frase2[]="marcos";
    char frase3final[30];
    concatenar(frase1,frase2,frase3final);
    printf("%s",frase3final);


}
