/*

Software 1 (Script Refinado)

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
através da variávels nota_1, nota_2, nota_3, nota_4, nota_5 ou nota_6,
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

Nota dos participantes;
Quatro maiores notas;
Mensagens de interação;
Média.



Parte 2, Interagindo com o Usuário:
Logo após, são escritos os comandos referentes a interação com o Usuário.

São impressas instruções ao Usuário para que o mesmo insira as notas, e,
logo em seguida, o programa lê o input e atribui seu valor à variável correspondente.

Para concluir a interação, após cada valor inserido pelo Usuário, é utilizado o método check, já descrito anteriormente,
para checar sua validade (e avisar o Usuário, caso necessário).



Parte 3, Trabalho da Máquina:
Nessa parte, o software vai realizar todas operações matemáticas 
a fim de obter o resultado desejado.

A fim de refinar o código da Máquina, inicializamos uma array para armazenar
todas as notas (float ou int) obtidas através do Usuário.

Logo após, inicializamos o For Loop, um laço do tipo for para interagir entre as variáveis nota_n e a, b, c, d.

O funcionamento do For Loop é muito simples. Ao ler cada item do array, o laço for tenta,
através de condicionais if, atribuir o valor lido às variáveis a, b, c, d, sequencialmente.

A variável lida do array deve ser maior que a variável a, b, c ou d lida no momento. E caso comparando com b, c ou d, há de ser, simultaneamente, menor que a letra anterior.   
Se essas duas condições são verdadeiras, cada letra posteriores recebe o valor da letra anterior a ela, e a letra lida no momento recebe o valor do item (nota_n).

Dessa forma, a, b, c e d estarão organizadas de modo descrescente: 1° Maior Nota, 2° Maior Nota, 3° Maior Nota e 4° Menor nota, respectivamente.



Parte 4, Interação com o Usuário:
Na última parte, informamos ao Usuário as quatro maiores notas.
Logo após, imprimimos a média aritmética entre as quatro maiores notas, calculada pela Máquina.



*/

int main(void) {

  // Parte 1, Declarando as Variáveis

  float nota_1, nota_2, nota_3, nota_4, nota_5, nota_6; // Nota dos Participantes.
  float a, b, c, d; // 1° Maior Nota, 2° Maior Nota, 3° Maior Nota, 4° Maior Nota.
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
  scanf(" %f", &nota_1); // Atribuição do valor inserido à variável nota_1.
  check(nota_1); // Confere se 0 <= nota_1 <= 10.

  printf("Atleta 2: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &nota_2); // Atribuição do valor inserido à variável nota_2.
  check(nota_2); // Confere se 0 <= nota_2 <= 10.

  printf("Atleta 3: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &nota_3); // Atribuição do valor inserido à variável nota_3.
  check(nota_3); // Confere se 0 <= nota_3 <= 10.

  printf("Atleta 4: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &nota_4); // Atribuição do valor inserido à variável nota_4.
  check(nota_4); // Confere se 0 <= nota_4 <= 10.

  printf("Atleta 5: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &nota_5); // Atribuição do valor inserido à variável nota_5.
  check(nota_5); // Confere se 0 <= nota_5 <= 10.

  printf("Atleta 6: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &nota_6); // Atribuição do valor inserido à variável nota_6.
  check(nota_6); // Confere se 0 <= nota_6 <= 10.



  // Parte 3, Trabalho da Máquina
  float notas[6] = {nota_1, nota_2 , nota_3, nota_4, nota_5, nota_6}; // Inicializa a array, armazenando as notas inseradas anteriormente.

  for(int n = 0; n < 6; n++) { // For Loop, descrito anteriormente.

    if(notas[n] > a) { d = c; c = b; b = a; a = notas[n]; } // Organiza as quatro maiores notas de forma decrescente (maior para a menor).
    else if (notas[n] > b) { d = c; c = b; b = notas[n]; } 
    else if (notas[n] > c) { d = c; c = notas[n];}
    else if (notas[n] > d) { d = notas[n]; }

  }
  
  m = (a + b + c + d) / 4; // Atribui à variável m a média das 4 maiores notas, resultando na Média da Equipe. 



  // Parte 4, Interação final com o Usuário

  printf(mi_notas, a, b, c, d); // Informa as Quatro Maiores Notas ao o Usuário, através de uma Mensagem de Interação.
  printf(mi_media, m); // Informa a Média da Equipe ao Usuário, através de uma Mensagem de Interação.


  return 0;
}