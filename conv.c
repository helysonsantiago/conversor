#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include "conversor.h"

/*LIBS*/





void animacao1(){
	
	for(int i=0; i < 50 ; i++){
	Sleep(2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	printf(".");
	}
}


void animacao2(){

	
	for(int i=0; i < 100 ; i++){
	Sleep(2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	printf("=");
	}

			
}




/*função responsavel pela animação inicial*/
void connected(){

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	printf("\n");
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
			SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\t\t\t\t\t\t\t\t   Manual do usuario");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\n\n\t\t Ola! se voce caiu de paraquedas aqui e porque deve estar com duvidas na utilizacao do programa, nao se preocupe\n");
			printf("\t\t logo a baixo esta uma breve descricao do softaware e sua finalidade. :)");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\n\t\t Conversor de arquivo");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\t\t   O conversor de arquivo e uma ferramenta densenvolvida em C junto ao Python atraves de um GCC(GNU Compiler Collection). ");
			printf("\n\t\t O uso da ferramenta e bem simples, basta navegar ate a opcao CONVERSOR depois selecione o formato que deseja");
			printf("\n\t\t receber o seu arquivo, logo apos informe o caminho arquivo selecionado e pronto basta olhar na Pasta entradaDeArquivos.");
			printf("\n\t\t OBS: Para que seja feita a conversão é necessario que o arquivo esteja dentro da pasta");
			SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE), 5);
			printf(" entradaDeArquivos");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			printf("\n\n\n\t\t\t\t\t\t\t\t Pressione 1 para retomar ao menu");
			SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE), 5);
			printf("\n\n\n\n\n\t\t\t\t\t\t\t\t       --> :");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			fflush(stdin);
			scanf(" %d", &manualDoUsuario);
						
				if(manualDoUsuario != 1) {
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					printf("\t\t\t\t\t\t\t\t\tOpcao invalida !");
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
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
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
		printf("Manual do Usuario\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		printf("\t\t\t\t\t     [3] ");
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
				printf("\t\t\t\t\t\tOK!");
				Sleep(1000);
                menu_conversor();
				break;
			case 2:
			
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\t\t\t\t\t\tOK!");
				Sleep(1000);
				manual();	
                menu_usuario();
				break;	
			case 3:		
				
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				printf("\t\t\t\t\t\tAte Mais!");
				Sleep(1000);
				exit(0);
				break;	
			
			default:

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("\t\t\t\t\tOpcao invalida !");
				Sleep(3000);
				system("cls");
				system("color 0F");
				menu_usuario();	
			
			}

}