#include <stdio.h>
#include <locale.h>

// APROVADO , REPROVADO E RECUPERA��O.

void main () {

setlocale(LC_ALL,"Portuguese");
// DECLARANDO VARIAVEIS.
float n1,n2,media;
// INSERINDO DADOS.
printf("PRIMEIRA NOTA:  ");
scanf("%f",&n1);
printf("SEGUNDA NOTA:  ");
scanf("%f",&n2);
// CALCULANDO A M�DIA.
media = (n1 + n2) / 2;
// SA�DA DE DADOS,
printf("COM AS NOTAS %.1f e %.1f O ALUNO TEM A M�DIA %.1f \n ", n1,n2,media);
printf("A SITUA��O � %s. ",(media>=7)? "APROVADO":"REPROVADO" );

// OPERADORES TERNAR�OS ( " ? , : ").


}
