#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistena

int main () {//Programa principal
// Declaração de Variáveis

int num_alunos, num_alunas;
// Cabeçalho

printf("Universidade de Brasilia\n", 161);
printf("Disciplina: 113913 - ICC \n");
printf ("Aluno (a) :\n\n\n") ;
//Tnício da 1ógica de programação
printf("Digite o nunero de alunos: "); //Início de intereção
scanf("%d", &num_alunos); /*Receber o dado com a função scanf do
tipo int identificado por td que será armazenado no espaço reservado para
mum alunos, cnum alunos*/
printf("Digite o numero de alunas: "); // Segunda impressão
scanf("%d", &num_alunas); /* Receber o dado do tipo int identificado por %d 
que será armazenado no espaço reservado para num alunos, num_alunos */
printf ("\nO numero de alunos %d\n", num_alunos);/*Apresentação de resultados
na tela com a função printf. Onde está o %d, será apresentado o valor de uma
variável do tipo int, que por sua vez é identificada posterormente, num_alunos,
por fim, \n sígnifica que deseja-se pular uma 1inha.*/
printf("O numero de alunas: %d", num_alunas);
getch(); //Função que aquarda o recebimento de um caractere via teclado.
}