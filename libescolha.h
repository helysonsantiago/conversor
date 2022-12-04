#ifndef LIBESCOLHA_H
#define LIBESCOLHA_H

#include <stdio.h>
#include <windows.h>
#include "libvalor.h"


char function(char[]);


char function(char* string[]){

	char string = str[];

                string = strdup("pdf ");
                return string;

	return string;

}





char* menu_conversor(){


	
    int escolha;
	int i;
    char string;    
	

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

            	string[5]="png";
				function(&string[0]);

				break;
			case 2:

				break;	
			case 3:

				break;	
			case 4:

				break;
			case 5:

				break;
			case 6:
                return(0);
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

#endif /*LIBESCOLHA_H*/