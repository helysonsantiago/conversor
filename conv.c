

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#include "conversor.h"


int validator = 0;

void animacao1(){

 			for(int i=0; i < 50 ; i++){
            Sleep(2);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
            printf(".");
        	}
}


void animacao2(){

				while(validator != 1){
	
					for(int i=0; i < 100 ; i++){
					Sleep(2);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
					printf("=");
					}

					validator++;
				}
}




/*função responsavel pela animação inicial*/
void connected(){

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    printf("Conectando a extensao");
    
    animacao1();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);   
    printf("\n\nConectado!!!");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
	Sleep(1000);
}


void letreiro(){
	
		printf("\n\n\n\n\n           ######   #######  ##    ## ##     ## ######## ########   ######   #######  ########\n");     
		printf("          ##    ## ##     ## ###   ## ##     ## ##       ##     ## ##    ## ##     ## ##     ##\n");   
		printf("          ##       ##     ## ####  ## ##     ## ##       ##     ## ##       ##     ## ##     ##\n");   
		printf("          ##       ##     ## ## ## ## ##     ## ######   ########   ######  ##     ## ########\n");  
		printf("          ##       ##     ## ##  ####  ##   ##  ##       ##   ##         ## ##     ## ##   ##\n");    
		printf("          ##    ## ##     ## ##   ###   ## ##   ##       ##    ##  ##    ## ##     ## ##    ##\n");   
		printf("           ######   #######  ##    ##    ###    ######## ##     ##  ######   #######  ##     ##\n\n\n\n\n\n");   
}



/*função Manual, aqui o usuario podera obter mais informações sobre o programa*/
void manual(){
	
		int manualDoUsuario;


		
													
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\t\t\t\t\t\t\t\t   Manual do usuario");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\n\n\t\t Olá! se você caiu de paraquedas aqui é porque deve estar com duvidas na utilização do programa, não se preocupe\n");
			printf("\t\t logo a baixo está uma breve descrição do softaware e sua finalidade. :)");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\n\t\t Virus Scanner");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\n\t\t O Virus Scanner é uma ferramenta destinada a buscar possiveis programas maliciosos como por EX. Malwares, Spiwares\n");
			printf("\t\tApós analise é gerado um relatorio que ficara disponivel no diretorio (VIRUS-SCANNER)");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\n\t\t Scanner Downloads");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\n\t\t Esta ferramenta realiza uma varredura nos downloads adicionados em uma determinada data fornecida pelo usuario \n");
			printf("\t\tApós analise é gerado um relatorio que ficara disponivel no diretorio (DOWNLOADS-SCANNER)");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\n\t\t Relatorios");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\n\t\t  A diretorio Relatorios é o diretorio central que armazena os subs-diretorios  (Virus Scanner) e (Downloads Scanner) \n");
			printf("\t\t para acessar é necessario confirmar LOGIN e SENHA");
			printf("\n\n\n\n\n\n\t\t Bom acredito que com estas informações você vai conseguir utilizar esta ferramenta, até mais, volte aqui sempre que precisar! \n");
			printf("\n\n\n\t\t\t\t\t\t\t\t Pressione 1 para retomar ao menu\n\t\t\t\t\t\t\t\t\t    -->:");
			setbuf(stdin, NULL);
			scanf(" %d", &manualDoUsuario);
						
				if(manualDoUsuario != 1) {
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					printf("\t\t\t\t\t\t\t\t\tOpção invalida !");
					Sleep(3000);
					manual();
					
				}else if(manualDoUsuario == 1){
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
					printf("\t\t\t\t\t\t\t\t\t     OK!");
					Sleep(1000);
				}


}


void menu_usuario(){

    	int escolha;
		system("cls");
		
	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		animacao2();
		letreiro();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		animacao2();
		

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\n\n\n\n\t\t\t\t\t       BEM-VINDO!");	

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\n\n\n\n\t\t\t\t\t     [1] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("Conversor\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t     [2] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("Relatorios\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t     [3] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("Manual do Usuario\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t     [4] ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("Sair");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\n\n\n\n\n\t\t\t\t\t       --> :");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		setbuf(stdin, 0);
		scanf("%i",&escolha);
				
		switch(escolha) {
			case 1:
			
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\t\t\t\t\tOK!");
				Sleep(1000);
                menu_conversor();
				break;
			case 2:
				break;	
			case 3:		
				
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\t\t\t\t\tOK!");
				Sleep(1000);
				manual();	
                menu_usuario();
				break;	

			case 4:

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\t\t\t\t\tAte Mais!");
				Sleep(1000);
				exit(0);
				break;		
				 
			default:

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("\t\t\t\t\tOpção invalida !");
				Sleep(3000);
				system("cls");
				system("color 0F");
				menu_usuario();	
			
			}

}