#include <stdio.h>
#include <locale.h>

// APROVADO , REPROVADO E RECUPERAÇÃO.

void main () {

setlocale(LC_ALL,"Portuguese");
// DECLARANDO VARIAVEIS.
float n1,n2,media;
// INSERINDO DADOS.
printf("PRIMEIRA NOTA:  ");
scanf("%f",&n1);
printf("SEGUNDA NOTA:  ");
scanf("%f",&n2);
// CALCULANDO A MÉDIA.
media = (n1 + n2) / 2;
// SAÍDA DE DADOS,
printf("COM AS NOTAS %.1f e %.1f O ALUNO TEM A MÉDIA %.1f \n ", n1,n2,media);
printf("A SITUAÇÃO É %s. ",(media>=7)? "APROVADO":"REPROVADO" );

// OPERADORES TERNARÍOS ( " ? , : ").


}
