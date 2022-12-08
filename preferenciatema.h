#ifndef PREFERENCIATEMA_H
#define PREFERENCIATEMA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE*file;


int tp=0;
int tmp;


int temaPreferencia(int tem){

		int tema;
		char txtCor[255];
		int resultado;
		file = fopen("C:\\Users\\Lenovo\\Desktop\\tb\\tema.txt","r");

		while(!feof(file)) {
				
			fgets(txtCor, 255,file);
			resultado = atoi(txtCor);
			tema = resultado;										
		}
	
	fclose(file);
    return tema;
}





void mn(){

    tmp = temaPreferencia(tp);
	
		int manualDoUsuario;
									
			system("cls");
			color(tmp);
			printf("\n\n\n\t\t\t\t\t\t\t\t   Manual do usuario");
			color(7);
			printf("\n\n\n\t\t Ola! se voce caiu de paraquedas aqui e porque deve estar com duvidas na utilizacao do programa, nao se preocupe\n");
			printf("\t\t logo a baixo esta uma breve descricao do softaware e sua finalidade. :)");
			color(tmp);
			printf("\n\n\n\n\t\t Conversor de arquivo");
			color(7);
			printf("\n\t\t  O conversor de arquivo e uma ferramenta densenvolvida em C junto ao Python atraves de um compilador GCC(GNU Compiler Collection).");
			printf("\n\t\ta mesma tem como proposta facilitar a sua vida, com ele voce nao precisar se preocupar em procurar sites gratuitos");
			printf("\n\t\tpara converter seu curriculo.docx em pdf, ou ate mesmo converter a sua imagem.jpeg em PNG. ");
			printf("\n\n\t\tVENHA EXPLORAR AS POSSIBILIDADES!!!");
			printf("\n\t\tO uso da ferramenta e bem simples, basta selecionar o formato do arquivo depois informe o nome do arquivo");
            color(4);
			printf("\n\t\t OBS: Para que seja feita a conversao e necessario que o arquivo esteja dentro da pasta");
			color(tmp);
			printf(" entradaDeArquivos");
			color(7);
			printf("\n\n\n\t\t\t\t\t\t\t\t Pressione 1 para retomar ao menu");
			color(tmp);
			printf("\n\n\n\n\n\t\t\t\t\t\t\t\t       --> :");
			color(7);
			fflush(stdin);
			scanf(" %d", &manualDoUsuario);
						
				if(manualDoUsuario != 1) {
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					printf("\t\t\t\t\t\t\t\t\tOpcao invalida !");
					color(7);
					Sleep(3000);
					mn();
					
				}else if(manualDoUsuario == 1){
					
					color(tmp);
					printf("\t\t\t\t\t\t\t\t\t     OK!");
					Sleep(1000);
					color(7);
				}


}

void pf(){

    tmp = temaPreferencia(tp);

        int tema;
        system("cls");
        color(tmp);
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Escolha uma combinacao de cores");
        color(7);
		printf("\n\n\n\n\t\t\t\t\t\t O tema do programa ira mudar mediante a cor escolhida aqui!   ");
		printf("\n\t\t\t\tVoce pode combinar Ex [1]+[3] para gerar uma cor nova! Abaixo estao algumas possibilidades");
		printf("\n\n\n\n\n\t\t\t\t\t\t\t\t 1 = Azul\t2 = Verde  ");
		printf("\n\t\t\t\t\t\t\t\t 3 = Verde-agua\t4 = Vermelho  ");
		printf("\n\t\t\t\t\t\t\t\t 4 = Vermelho\t5 = Roxo  ");
		printf("\n\t\t\t\t\t\t\t\t 6 = Amarelo\t7 = Branco ");
		printf("\n\t\t\t\t\t\t\t\t 8 = Cinza\t9 = Azul claro \n\n");
		printf("\t\t\t\t\t\t\t\t\t --> : ");
				
	
			scanf("%d", &tema);

				printf("\t\t\t\t\t\t\t\t   Configuracoes salvas!");
				Sleep(2000);
				system("cls");
				file = fopen("C:\\Users\\Lenovo\\Desktop\\tb\\tema.txt","w");
				fprintf(file,"%d",tema);
				fclose(file);
}


void preferencia() {

        tmp= temaPreferencia(tp);
		
        int escolha;

		color(tmp);
        printf("\n\n\t\t\t\t\t    OPCOES ");
        color(tmp);
        printf("\n\n\t\t\t\t\t    [1] ");
        color(7);
        printf("Prefencias do usuario\n");
        color(tmp);
        printf("\t\t\t\t\t    [2] ");
        color(7);
		printf("Manual\n");
		color(tmp);
        printf("\t\t\t\t\t    [3] ");
        color(7);
        printf("Voltar\n");
		color(tmp);
		printf("\n\n\n\n\n\t\t\t\t\t    --> :");
		color(7);
		fflush(stdin);
        scanf("%i",&escolha);
        switch(escolha){
            case 1:
                    pf();
                break;
            case 2:
                    mn();
                break;
			case 3:
				return;
				break;
			default:

				color(4);
				printf("\t\t\t\t\t\tOpcao invalida !");
				Sleep(3000);
				system("cls");
				system("color 0F");
				preferencia();	
			}

            
        }
	




#endif