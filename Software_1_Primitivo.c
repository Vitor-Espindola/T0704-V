/*

Software 1 (Script Primitivo) 

(AWPM)

Desenvolvido por Vitor Espindola e Guilherme Kollet.

*/

/*
Objetivo:
Na ginástica olímpica as notas de uma equipe são dadas assim: seis atletas fazem seus
exercícios e recebem suas notas entre 0 e 10. Em seguida a nota geral da equipe é dada
pela média das quatro maiores notas recebidas. Faça um programa que recebe seis notas
correspondentes aos atletas e apresenta a nota geral da equipe
.*/

#include <stdio.h>
#include <stdlib.h>

/*
O método check tem como objetivo evitar possíveis casos indesejados 
para o funcionamento do programa e alertar ao Usuário sobre o problema.

O método check tem como parâmetro um float n, e esse será utilizado
através da variávels p1, p2, p3, p4, p5 ou p6,
referentes às notas da equipe, atribuídas pelo Usuário.

O método check erá utilizado no decorrer do programa para
verificar se o valor atribuído pelo input à variável se encontra dentro
do intervalo desejado [0;10]. 

Se n > 10, o programa imprime a mensagem "Digito invalido. A nota maxima e 10." e encerra seu funcionamento.

Se n < 0, o programa imprime a mensagem "Digito invalido. A nota minima e 0." e encerra seu funcionamento.
*/

float check(float n) {
  if(n > 10) { // Checa se a nota inserida é maior que 10.
    printf("\nDigito invalido. A nota maxima e 10.\n"); // Imprime aviso na tela.
    exit(0); // Encerra o programa.
  }
  if(n < 0) { // Checa se a nota inserida é menor que 0.
    printf("\nDigito invalido. A nota minima e 0.\n"); // Imprime aviso na tela.
    exit(0);  // Encerra o programa.
    }

    return 0;
}

/* 

O método main executa a principal função do programa (descrita no topo do programa).

Parte 1, Declarando as Variáveis:
Nas primeiras linhas são criadas todas as variáveis que serão necessárias ao longo do programa:

Nota dos Participantes;
Quatro Maiores Notas;
Mensagens de Interação;
Média.



Parte 2, Interação com o Usuário e Coleta de Dados:
Logo após, são escritos os comandos referentes a interação com o Usuário.

São impressas instruções ao Usuário para que o mesmo insira as notas, e,
logo em seguida, o programa lê o input e atribui seu valor à variável correspondente.

Para concluir a interação, após cada valor inserido pelo Usuário, é utilizado o método check, já descrito anteriormente,
para checar sua validade (e avisar o Usuário, caso necessário).



Parte 3, Trabalho da Máquina:
Nessa parte, o software vai realizar todas operações matemáticas 
a fim de obter o resultado desejado.

O Trabalho da Máquina do Script Primitivo é constituído por um sistema bem primitivo e nada refinado.
Foi montada uma sequência de condicionais, a fim de ordernar as Quatro Maiores Notas, de modo decrescente.

Para isso, as notas são testadas por cada variável a, b, c ou d.
Se a nota for maior do que o valor da variável a, b, c ou d correspondente,
e, simultaneamente, menor do que o valor da variável de letra anterior (nos casos de b, c e d),
é atribuído a nota testada a essa variável.

Dessa forma, a, b, c e d estarão organizadas de modo descrescente: 1° Maior Nota, 2° Maior Nota,
3° Maior Nota e 4° Menor nota, respectivamente.



Parte 4, Interação com o Usuário:
Na última parte, informamos ao Usuário as quatro maiores notas.
Logo após, imprimimos a média aritmética entre as quatro maiores notas, calculada pela Máquina.



*/

int main() {

  // Parte 1, Declarando as Variáveis
  
  float p1, p2, p3, p4, p5, p6; // Nota dos Participantes.
  float a, b, c, d; // Quatro Maiores Notas.
  a = 0; // Inicializa as variáveis para evitar problemas futuros no Trabalho da Máquina.
  b = 0;
  c = 0;
  d = 0;
  float m; // Média da equipe - Média entre as 4 maiores notas.

  // Mensagens de Interação
  char mi_notas[64] = "\nA = %.2f B = %.2f C = %.2f D = %.2f";
  char mi_media[32] = "\nMedia da equipe: %.2f";



  // Parte 2, Interação com o Usuário e Coleta de Dados
  
  printf("\nDigite a nota de cada integrante da equipe:"); // Imprime a instrução ao Usuário.

  printf("\n\nAtleta 1: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p1); // Atribuição do valor inserido à variável p1.
  check(p1); // Confere se 0 <= p1 <= 10.

  printf("Atleta 2: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p2); // Atribuição do valor inserido à variável p2.
  check(p2); // Confere se 0 <= p2 <= 10.

  printf("Atleta 3: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p3); // Atribuição do valor inserido à variável p3.
  check(p3); // Confere se 0 <= p3 <= 10.

  printf("Atleta 4: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p4); // Atribuição do valor inserido à variável p4.
  check(p4); // Confere se 0 <= p4 <= 10.

  printf("Atleta 5: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p5); // Atribuição do valor inserido à variável p5.
  check(p5); // Confere se 0 <= p5 <= 10.

  printf("Atleta 6: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p6); // Atribuição do valor inserido à variável p6.
  check(p6); // Confere se 0 <= p6 <= 10.



  // Parte 3, Trabalho da Máquina
  
  // Sequência de Condicionais, descrito anteriormente.
  if (p1 > a) { a = p1; }
  if (p2 > a) { a = p2; }
  if (p3 > a) { a = p3; }
  if (p4 > a) { a = p4; }
  if (p5 > a) { a = p5; }
  if (p6 > a) { a = p6; }

  if (p1 > b && p1 < a) { b = p1; }
  if (p2 > b && p2 < a) { b = p2; }
  if (p3 > b && p3 < a) { b = p3; }
  if (p4 > b && p4 < a) { b = p4; }
  if (p5 > b && p5 < a) { b = p5; }
  if (p6 > b && p6 < a) { b = p6; }

  if (p1 > c && p1 < b) { c = p1; }
  if (p2 > c && p2 < b) { c = p2; }
  if (p3 > c && p3 < b) { c = p3; }
  if (p4 > c && p4 < b) { c = p4; }
  if (p5 > c && p5 < b) { c = p5; }
  if (p6 > c && p6 < b) { c = p6; }

  if (p1 > d && p1 < c) { d = p1; }
  if (p2 > d && p2 < c) { d = p2; }
  if (p3 > d && p3 < c) { d = p3; }
  if (p4 > d && p4 < c) { d = p4; }
  if (p5 > d && p5 < c) { d = p5; }
  if (p6 > d && p6 < c) { d = p6; }

  m = (a + b + c + d)/4;
  
  

  // Parte 4, Interação final com o Usuário
  
  printf(mi_notas, a, b, c, d); // Informa as Quatro Maiores Notas ao o Usuário, através de uma Mensagem de Interação.
  printf(mi_media, m); // Informa a Média da Equipe ao Usuário, através de uma Mensagem de Interação.


  return 0;
}

