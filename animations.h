#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include <windows.h>
#include <stdio.h>


void animation(){
	
	for(int i=0; i < 50 ; i++){
	Sleep(2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	printf(".");
	}
}

		
/*função responsavel pela animação inicial*/
void connected(){

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	printf("\n");
    printf("Conectando a extensao");
    
    animation();

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

void color(int color){

    int cp;
    cp = color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cp);

}





#endif /*ANIMATIONS*/