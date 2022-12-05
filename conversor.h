#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include "free.h"

FILE *file;








char* menu_conversor(){


    int escolha;
	char caminho[1000];
	int i;
    char *string;
	char png[4]={'p','n','g','\0'};    
	char pdf[4]={'p','d','f','\0'};   
	char jpg[4]={'j','p','g','\0'};    
	char jpeg[5]={'j','p','e','g','\0'};
	char docx[5]={'d','o','c','x','\0'};         

	char *res;

        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        printf("\n\n\n\n\n           ######   #######  ##    ## ##     ## ######## ########   ######   #######  ########\n");     
		printf("          ##    ## ##     ## ###   ## ##     ## ##       ##     ## ##    ## ##     ## ##     ##\n");   
		printf("          ##       ##     ## ####  ## ##     ## ##       ##     ## ##       ##     ## ##     ##\n");   
		printf("          ##       ##     ## ## ## ## ##     ## ######   ########   ######  ##     ## ########\n");  
		printf("          ##       ##     ## ##  ####  ##   ##  ##       ##   ##         ## ##     ## ##   ##\n");    
		printf("          ##    ## ##     ## ##   ###   ## ##   ##       ##    ##  ##    ## ##     ## ##    ##\n");   
		printf("           ######   #######  ##    ##    ###    ######## ##     ##  ######   #######  ##     ##\n\n\n\n\n\n"); 

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	    printf("\t\t\t\t PARA QUAL FORMATO VOCE QUER CONVERTER?");
        
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\n\n\n\n\t\t\t\t\t    [1] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("PNG\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t    [2] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("PDF\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t    [3] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("JPG\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t    [4] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("JPEG\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t    [5] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("DOCX\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t    [6] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("Voltar");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\n\n\n\n\n\t\t\t\t\t    --> :");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		setbuf(stdin, 0);
		scanf("%i",&escolha);
		

		switch(escolha) {
			case 1:

				printf("\n\nInforme o caminho do arquivo com o formato EX :C:\\Desktop\\Workspace\\meuArquivo.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\n\nFormato = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", png);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\nCaminho = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", caminho);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("\n\nDeseja avancar?");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n\n[1] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Sim");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n[2] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Nao\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("-->");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				setbuf(stdin, 0);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\helys\\Desktop\\conversor\\caminho.txt","w");	
					fprintf(file, "%s", caminho);
					printf("\nSalvando....");

					string = strdup(png);
					Sleep(30000);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}// verificar aqui!!
				
		
				break;
			case 2:

				printf("\n\nInforme o caminho do arquivo com o formato EX :C:\\Desktop\\Workspace\\meuArquivo.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\n\nFormato = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", pdf);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\nCaminho = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", caminho);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("\n\nDeseja avancar?");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n\n[1] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Sim");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n[2] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Nao\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("-->");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				setbuf(stdin, 0);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\helys\\Desktop\\conversor\\caminho.txt","w");	
					fprintf(file, "%s", caminho);

					string = strdup(pdf);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}


				break;	
			case 3:

				printf("\n\nInforme o caminho do arquivo com o formato EX :C:\\Desktop\\Workspace\\meuArquivo.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\n\nFormato = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", jpg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\nCaminho = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", caminho);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("\n\nDeseja avancar?");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n\n[1] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Sim");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n[2] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Nao\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("-->");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				setbuf(stdin, 0);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\helys\\Desktop\\conversor\\caminho.txt","w");	
					fprintf(file, "%s", caminho);

					string = strdup(jpg);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}


				break;	
			case 4:

              		printf("\n\nInforme o caminho do arquivo com o formato EX :C:\\Desktop\\Workspace\\meuArquivo.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\n\nFormato = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", jpeg);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\nCaminho = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", caminho);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("\n\nDeseja avancar?");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n\n[1] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Sim");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n[2] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Nao\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("-->");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				setbuf(stdin, 0);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\helys\\Desktop\\conversor\\caminho.txt","w");	
					fprintf(file, "%s", caminho);

					string = strdup(jpeg);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}

				
				break;
			case 5:

					printf("\n\nInforme o caminho do arquivo com o formato EX :C:\\Desktop\\Workspace\\meuArquivo.pdf \n");
				printf("--> ");
				scanf("%s", caminho);

				printf("\nOpcoes selecionas:");
				printf("\n____________________________");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\n\nFormato = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", docx);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("\nCaminho = ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("%s", caminho);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("\n\nDeseja avancar?");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n\n[1] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Sim");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\n[2] ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("= Nao\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("-->");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				setbuf(stdin, 0);	
				scanf("%i",&escolha);
				if (escolha == 1)
				{
					file=fopen("C:\\Users\\helys\\Desktop\\conversor\\caminho.txt","w");	
					fprintf(file, "%s", caminho);

					string = strdup(docx);
					return string;

				}else if(escolha == 2){
					menu_conversor();
				}


				break;
			case 6:
				
				break;				
			default:

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("\t\t\t\t\t\t\t\t\tOpção invalida !");
				Sleep(3000);
				system("cls");
				system("color 0F");
				menu_conversor();	
			}

}

#endif /*CONVERSOR_H*/