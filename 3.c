#include<stdio.h> //Biblioteca de entrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistena

int main () {//Programa principal

// Cabe�alho

printf("Universidade de Brasilia\n", 161);
printf("Disciplina: 113913 - ICC \n");
printf ("Aluno(a) :\n\n\n") ;
//In�cio da 1�gica de programa��o
int num;
printf("Digite um n�mero inteiro: "); //In�cio de intere��o
scanf("%d", &num);
printf("Tabuada de %d:\n\n", num);

// Escrevendo Mensagens na Tela
printf("\t%d x 1 = %d\n", num, num*1);
printf("\t%d x 2 = %d\n", num, num*2);
printf("\t%d x 3 = %d\n", num, num*3);
printf("\t%d x 4 = %d\n", num, num*4);
printf("\t%d x 5 = %d\n", num, num*5);
printf("\t%d x 6 = %d\n", num, num*6);
printf("\t%d x 7 = %d\n", num, num*7);
printf("\t%d x 8 = %d\n", num, num*8);
printf("\t%d x 9 = %d\n", num, num*9);
printf("\t%d x 10 = %d\n", num, num*10);
}