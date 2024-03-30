#include <stdio.h>
#include <locale.h>


// CADASTRO DE ALUNOS , SEXO E NOTAS.

 void main () {

    setlocale(LC_ALL,"Portuguese");

    printf("_____________________________\n");
    printf("CADASTRANDO A PRIMEIRA PESSOA:\n ");
    printf("____________________________\n\n");

// DECLARANDO VARIAVEIS E CONSTANTES.
char nome1 [20], nome2 [20], nome3 [20];
char sexo1, sexo2, sexo3;
float nota1, nota2, nota3;
// INSERINDO OS DADOS DA PRIMEIRA PESSOA.
printf("NOME: ");
gets(nome1);
printf("[M/F]: ");
sexo1 = getchar();
printf("NOTA: ");
scanf("%f",&nota1);
printf("______________________________\n");
printf("CADASTRANDO A SEGUNDA PESSOA:\n");
printf("______________________________\n\n");
fflush(stdin);
// INSERINDO DADOS DA SEGUNDA PESSOA.
printf("NOME: ");
gets(nome2);
printf("[M/F]: ");
sexo2 = getchar();
printf("NOTA: ");
scanf("%f",&nota2);
printf("_____________________________\n");
printf("CADASTRANDO A TERCEIRA PESSOA.\n");
printf("_____________________________\n\n");
fflush(stdin);
printf("NOME: ");
gets(nome3);
printf("[M/F]: ");
sexo3 = getchar();
printf("NOTA: ");
scanf("%f",&nota3);
fflush(stdin);
printf("__________________________________________\n");
printf("LISTA COMPLETA DOS DADOS ADIQUIRIDOS. \n");
printf("__________________________________________\n\n");
printf("NOME                  SEXO    NOTA\n");
printf("%-20s   %c    %6.1f\n", nome1, sexo1, nota1);
printf("%-20s   %c    %6.1f\n", nome2, sexo2, nota2);
printf("%-20s   %c    %6.1f\n", nome3, sexo3, nota3);
printf("__________________________________________.");






 }
