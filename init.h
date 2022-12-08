#ifndef INIT_H
#define INIT_H


#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#include "animations.h"
#include "clear__buffer.h"

#include "preferenciatema.h"


FILE*file;


int tem=0;
int tema;




char* menu_conversor(){
	
	 tema = temaPreferencia(tem);


    int escolha;
	char caminho[1000];
    char *string;
	char png[4]={'p','n','g','\0'};    
	char pdf[4]={'p','d','f','\0'};   
	char jpg[4]={'j','p','g','\0'};    
	char jpeg[5]={'j','p','e','g','\0'};
	char docx[5]={'d','o','c','x','\0'};         


    
        system("cls");    
        letreiro();

        color(tema);;
	    printf("\t\t\t\t PARA QUAL FORMATO VOCE QUER CONVERTER?");

		color(tema);;
		printf("\n\n\n\n\t\t\t\t\t    [1] ");
		color(7);
		printf("PNG\n");
		color(tema);;
		printf("\t\t\t\t\t    [2] ");
		color(7);
		printf("PDF\n");
		color(tema);
		printf("\t\t\t\t\t    [3] ");
		color(7);
		printf("JPG\n");
		color(tema);
		printf("\t\t\t\t\t    [4] ");
		color(7);
		printf("JPEG\n");
		color(tema);
		printf("\t\t\t\t\t    [5] ");
		color(7);
		printf("DOCX\n");
		color(tema);
		printf("\t\t\t\t\t    [6] ");
		color(7);
		printf("Sair\n\n");
		
		printf("\t\t\t\t\t ______________ \n\n");
		
		printf("\t\t\t\t\t    [7] ");
		color(tema);
		printf("BONUS\n");
		color(7);
		printf("\n\n\n\n\n\t\t\t\t\t    --> :");
		color(7);
		fflush(stdin);
		scanf("%i",&escolha);
		

		switch(escolha) {
			case 1:

				printf("\n\nInforme o nome do arquivo mais o formato EXEMPLO : teste.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				color(7);
				printf("\n\nFormato = ");
				color(tema);
				printf("%s", png);
				color(7);
				printf("\nCaminho = ");
				color(tema);
				printf("%s", caminho);
				color(1);;
				printf("\n\nDeseja avancar?");
				color(tema);
				printf("\n\n[1] ");
				color(7);
				printf("= Sim");
				color(tema);
				printf("\n[2] ");
				color(7);
				printf("= Nao\n\n");
				color(1);;
				printf("-->");
				color(7);
				fflush(stdin);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\Lenovo\\Desktop\\tb\\caminho.txt","w");	
					fprintf(file, "%s", caminho);
					fclose(file);
					string = strdup(png);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}
	
				break;
			case 2:

				printf("\n\nIInforme o nome do arquivo mais o formato EXEMPLO : teste.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				color(7);
				printf("\n\nFormato = ");
				color(tema);
				printf("%s", pdf);
				color(7);
				printf("\nCaminho = ");
				color(tema);
				printf("%s", caminho);
				color(1);;
				printf("\n\nDeseja avancar?");
				color(tema);
				printf("\n\n[1] ");
				color(7);
				printf("= Sim");
				color(tema);
				printf("\n[2] ");
				color(7);
				printf("= Nao\n\n");
				color(1);
				printf("-->");
				color(7);
				fflush(stdin);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\Lenovo\\Desktop\\tb\\caminho.txt","w");	
					fprintf(file, "%s", caminho);
					fclose(file);
					printf("\nSalvando....");
					string = strdup(pdf);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}


				break;	
			case 3:

				printf("\n\nInforme o nome do arquivo mais o formato EXEMPLO : teste.pdf \n");
				printf("--> ");
				scanf("%s", caminho);
				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				color(7);
				printf("\n\nFormato = ");
				color(tema);
				printf("%s", jpg);
				color(7);
				printf("\nCaminho = ");
				color(tema);
				printf("%s", caminho);
				color(1);
				printf("\n\nDeseja avancar?");
				color(tema);
				printf("\n\n[1] ");
				color(7);
				printf("= Sim");
				color(tema);
				printf("\n[2] ");
				color(7);
				printf("= Nao\n\n");
				color(1);
				printf("-->");
				color(7);
				fflush(stdin);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\Lenovo\\Desktop\\tb\\caminho.txt","w");	
					fprintf(file, "%s", caminho);
					fclose(file);
					printf("\nSalvando....");
					string = strdup(jpg);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}

				break;	
			case 4:

              	printf("\n\nInforme o nome do arquivo mais o formato EXEMPLO : teste.pdf  \n");
				printf("--> ");
				scanf("%s", caminho);
				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				color(7);
				printf("\n\nFormato = ");
				color(tema);
				printf("%s", jpeg);
				color(7);
				printf("\nCaminho = ");
				color(tema);
				printf("%s", caminho);
				color(1);
				printf("\n\nDeseja avancar?");
				color(tema);
				printf("\n\n[1] ");
				color(7);
				printf("= Sim");
				color(tema);
				printf("\n[2] ");
				color(7);
				printf("= Nao\n\n");
				color(1);
				printf("-->");
				color(7);
				fflush(stdin);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\Lenovo\\Desktop\\tb\\caminho.txt","w");	
					fprintf(file, "%s", caminho);
					fclose(file);
					printf("\nSalvando....");
					string = strdup(jpeg);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}
				break;
			case 5:
			
				printf("\n\nInforme o nome do arquivo mais o formato EXEMPLO : teste.pdf  \n");
				printf("--> ");
				scanf("%s", caminho);
				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				color(7);
				printf("\n\nFormato = ");
				color(tema);
				printf("%s", docx);
				color(7);
				printf("\nCaminho = ");
				color(tema);
				printf("%s", caminho);
				color(1);
				printf("\n\nDeseja avancar?");
				color(tema);
				printf("\n\n[1] ");
				color(7);
				printf("= Sim");
				color(tema);
				printf("\n[2] ");
				color(7);
				printf("= Nao\n\n");
				color(1);
				printf("-->");
				color(7);
				fflush(stdin);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\helys\\Desktop\\tb\\caminho.txt","w");	
					fprintf(file, "%s", caminho);
					fclose(file);
					printf("\nSalvando....");
					string = strdup(docx);
					return string;
				}else if(escolha == 2){
					menu_conversor();
				}
				break;
			case 6:
				system("pause");
				exit(0);
				break;
			case 7:
				preferencia();
				menu_conversor();
				break;				
			default:

				color(4);
				printf("\t\t\t\t\t\tOpcao invalida !");
				Sleep(3000);
				system("cls");
				system("color 0F");
				
			}


}

#endif