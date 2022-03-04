#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistena

int main () {//Programa principal

printf("UNIS\n", 161);
printf("Disciplina: Sistemas Embarcados\n");
printf ("Aluno: Diego Faria\n\n") ;


int lado, area, perimetro;
	
printf("Digite o lado do quadrado em cm: ");
scanf("%d", &lado);
	
area=lado*lado;
perimetro = lado*4;
printf("\nA area do quadrado e: %d", area);
printf("\nO perimetro do quadrado e: %d", perimetro);
getch();//Função que aquarda o recebimento de um caractere via teclado.

}