#include<stdio.h> //Biblioteca de entrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistena

int main () {//Programa principal
// Declara��o de Vari�veis

// Cabe�alho

printf("UNIS\n", 161);
printf("Disciplina: Sistemas Embarcados\n");
printf ("Aluno: Diego Faria\n\n") ;

/* Os seguintes comandos printf s�o para imprimir a mensagem dentro das "" para que haja
comunica��o entre computador e o usu�rio do programa. As fun��es scanf sevem para rece-
ber os n�meros desejados, o "%d� indica que a vari�vel ao qual ser� destinada o valor
recebido � do tipo inteiro. o & �ndica que ser� armazenado no espa�o declarado anter�or-
mente para a variavel que vem logo em sequida deste &. */

int marcaA, marcaB, marcaC;
printf("Digite a quantidade de chuteiras da marca A: ");

scanf("%d", &marcaA);

printf("\nDigite a quantidade de chuteiras da marca B: ");

scanf("%d", &marcaB);

printf("\nDigite a quantidade de chuteiras da marca C: ");

scanf("%d", &marcaC);

//Apreseta��o dos Resultados Letra A)
printf("\nExistem %d chuteiras da marca A\n", marcaA);

printf("Existem %d chuteiras da marca B\n", marcaB);

printf("Existem %d chuteiras da marca C\n\n", marcaC);

//Apresenta��o dos Resultados Letra B)
printf("Existem %d chuteiras da marca A, %d da marca B, %d da marca C\n\n", marcaA,marcaB,marcaC);

// Apresenta��o dos Resultados Letra C)

printf("\t\t Quantidade de Chuteiras em Estoque\n");

printf("\t\tMarca A \t Marca B \t Marca C\n");
printf("\t\t  %d    \t           %d     \t   %d\n\n", marcaA,marcaB,marcaC);
getch(); //Fun��o que aquarda o recebimento de um caractere via teclado.
}
