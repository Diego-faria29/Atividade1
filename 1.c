#include<stdio.h> //Biblioteca de entrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistena

int main () {//Programa principal
// Declara��o de Vari�veis

int num_alunos, num_alunas;
// Cabe�alho

printf("Universidade de Brasilia\n", 161);
printf("Disciplina: 113913 - ICC \n");
printf ("Aluno (a) :\n\n\n") ;
//Tn�cio da 1�gica de programa��o
printf("Digite o nunero de alunos: "); //In�cio de intere��o
scanf("%d", &num_alunos); /*Receber o dado com a fun��o scanf do
tipo int identificado por td que ser� armazenado no espa�o reservado para
mum alunos, cnum alunos*/
printf("Digite o numero de alunas: "); // Segunda impress�o
scanf("%d", &num_alunas); /* Receber o dado do tipo int identificado por %d 
que ser� armazenado no espa�o reservado para num alunos, num_alunos */
printf ("\nO numero de alunos %d\n", num_alunos);/*Apresenta��o de resultados
na tela com a fun��o printf. Onde est� o %d, ser� apresentado o valor de uma
vari�vel do tipo int, que por sua vez � identificada posterormente, num_alunos,
por fim, \n s�gnifica que deseja-se pular uma 1inha.*/
printf("O numero de alunas: %d", num_alunas);
getch(); //Fun��o que aquarda o recebimento de um caractere via teclado.
}