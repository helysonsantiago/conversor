#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

main(){

    int n;
    FILE * file;

    printf("Informe o tipo de saida \n");
    printf("PDF = (1)\n");
    printf("WORD = (2)\n");
    printf("JPG  = (3)\n");
    printf("PNG  = (4)\n");
    scanf("%d",&n);
    
    switch (n){
    case 1:
        escreve("PDF")
        break;
    
    default:
        break;
    }

    file = fopen("C:\\Users\\helys\\Desktop\\python\\valorDoUsuario.txt","m");
	fprintf(file,"%s",dados);
	fclose(file);

}    