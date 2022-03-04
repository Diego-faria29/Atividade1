#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistena

int main () {//Programa principal
// Declaração de Variáveis

// Cabeçalho

printf("UNIS\n", 161);
printf("Disciplina: Sistemas Embarcados\n");
printf ("Aluno: Diego Faria\n\n") ;

/* Os seguintes comandos printf são para imprimir a mensagem dentro das "" para que haja
comunicação entre computador e o usuário do programa. As funções scanf sevem para rece-
ber os números desejados, o "%d” indica que a variável ao qual será destinada o valor
recebido é do tipo inteiro. o & índica que será armazenado no espaço declarado anteríor-
mente para a variavel que vem logo em sequida deste &. */

int marcaA, marcaB, marcaC;
printf("Digite a quantidade de chuteiras da marca A: ");

scanf("%d", &marcaA);

printf("\nDigite a quantidade de chuteiras da marca B: ");

scanf("%d", &marcaB);

printf("\nDigite a quantidade de chuteiras da marca C: ");

scanf("%d", &marcaC);

//Apresetação dos Resultados Letra A)
printf("\nExistem %d chuteiras da marca A\n", marcaA);

printf("Existem %d chuteiras da marca B\n", marcaB);

printf("Existem %d chuteiras da marca C\n\n", marcaC);

//Apresentação dos Resultados Letra B)
printf("Existem %d chuteiras da marca A, %d da marca B, %d da marca C\n\n", marcaA,marcaB,marcaC);

// Apresentação dos Resultados Letra C)

printf("\t\t Quantidade de Chuteiras em Estoque\n");

printf("\t\tMarca A \t Marca B \t Marca C\n");
printf("\t\t  %d    \t           %d     \t   %d\n\n", marcaA,marcaB,marcaC);
getch(); //Função que aquarda o recebimento de um caractere via teclado.
}
