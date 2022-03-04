#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistena

int main () {//Programa principal

printf("UNIS\n", 161);
printf("Disciplina: Sistemas Embarcados\n");
printf ("Aluno: Diego Faria\n\n") ;

int num1;
	
printf("Escreva um numero na base decimal: ");
scanf("%d", &num1);
	
printf("\n O numero %d na base octal: %o\n",num1, num1);
printf("\n O numero %d na base hexadecimal: %x\n",num1, num1);
getch(); //Função que aquarda o recebimento de um caractere via teclado.
	
	
	
	
}