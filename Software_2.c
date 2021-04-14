/*

Software 2

(AWPM)

Desenvolvido por Vitor Espindola e Guilherme Kollet.

*/

/*
Objetivo:
Escreva um programa que recebe as quatro notas da avaliação de um aluno (três provas e
uma nota de trabalho) e apresenta os seguintes resultados:
• A media do aluno (supondo pesos iguais).
• Se a última nota era zero, o programa assume que esta nota ainda não existe e diz ao
aluno qual nota ele deve tirar para ter media sete
*/

#include <stdio.h>
#include <stdlib.h>

/*
O método check tem como objetivo evitar possíveis casos indesejados 
para o funcionamento do programa e alertar ao Usuário sobre o problema. 

O método check tem como parâmetro um float n, e esse será utilizado
através da variável p1, p2, p3 ou t, referentes às notas do aluno, atribuídas pelo Usuário.

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

Parte 1, Declarando as variáveis:
Nas primeiras linhas são criadas todas as variáveis que serão necessárias ao longo do programa:

Notas do Aluno;
Média;
Nota Requerida; 
Variável de Decisão.
Mensagens de Interação;




Parte 2, Interação com o Usuário e Coleta de Dados:
Logo após, são escritos os comandos referentes a interação com o Usuário.

São impressas instruções ao Usuário para que o mesmo insira as notas, e,
logo em seguida, o programa lê o input e atribui seu valor à variável correspondente.

Para concluir a interação, após cada valor inserido pelo Usuário, é utilizado o método check, já descrito anteriormente,
para checar sua validade (e avisar o Usuário, caso necessário).



Parte 3, Trabalho da Máquina:
Nessa parte, o software vai realizar todas operações matemáticas 
a fim de obter o resultado desejado.

Nesse momento, nosso programa tomará um entre dois rumos:

Rumo A: se t != 0, trabalho já realizado
Rumo B: se t = 0, ou seja, Usuário não realizou o trabalho ainda.

Rumo A:
No enunciado do programa, afirmamos que, se a nota do trabalho for igual a 0,
o programa entende como se o mesmo ainda teria sido realizado. 
Logo, informaremos a nota que o Usuário necessita tirar nesse trabalho,
a fim de atingir media 7.
Por isso, começamos a fazer os cálculos dentro de uma condição (t != 0),
ou seja, o Usuário já realizou o trabalho.

Calculamos a media aritmética utilizando as variáveis p1, p2, p3, e t e a atribuimos à variável m.
Informamos a media avaliativa ao Usuário, em uma formatação de duas casas decimais (.2f).
Logo depois, caso o Usuário não atinja a media 7 (m < 7), informamos o Usuário atráves
de uma Mensagem de interação. Caso contrário (m >= 7), informamos
o Usuário através de uma Mensagem de interaçao.

Rumo B:
Nesse caso, como o trabalho ainda não foi realizado, informaremos ao Usuário
a nota necessária no trabalho para atingir a media 7.

Utilizaremos a variável req (nota quererida) para receber o valor
de 28 - p1 - p2 - p3 (equivalente a equação da media aritética
entre 4 valores, isolando a variável não declarada).

Caso o valor necessário for maior do que 10 (req > 10), 
informaremos ao Usuário que, teoricamente, seria necessária para aprovação.
Porém, se req < 10, informaremos ao Usuário a nota necessária (req),
a fim de atingir a media 7.




Parte 4, Interação com o Usuário:
Na última parte, perguntamos ao Usuário se ele deseja encerrar o programa
ou realizar o processo novamente.

1. Reiniciar Programa
0. Sair

Essa decisão dependerá do input do Usuário. Para isso,
utilizamos o switch, e atribuímos a variável d (decide), o valor
passado pelo Usuário.

Se d = 1, chamamos a função main() e o programa "reiniciará".
Se d = 0, apenas informamos ao Usuário que o programa foi encerrado,
utilizando uma Mensagem de interação, e o programa encerrará normalmente.
Se d != 1 e d != 0, informaremos ao Usuário sobre o input inválido,
atráves de uma Mensagem de interação, e o programa encerrará normalmente.



*/
int main(void) {

  // Parte 1, Declarando as Variáveis
  
  float p1, p2, p3, t; // Prova 1, Prova 2, Prova 3 e Trabalho;
  float m; // Média avaliativa;
  float req; // Média requerida para o Trabalho;
  int d; // Dígito de decisão.
  
  // Mensagens de Interação
  char mi_mediabaixo[32] = "\nVoce esta abaixo da media.\n";
  char mi_aprovado[32] = "\nAluno aprovado!\n";
  char mi_fim[64] = "\nNota necessaria acima do possivel!\n";
  char mi_precisa[32] = "Voce precisaria de %.2f.\n";
  char mi_notareq[72] = "\nVoce vai precisar tirar no trabalho %.2f para atingir a media 7.\n";
  char mi_decide[62] = "\n\nO que voce deseja fazer?\n\n1. Reiniciar Programa\n0. Sair\n";
  char mi_final[32] = "Sessao Finalizada.";
  char mi_invalid[16] = "Valor invalido.";
  
  

  // Parte 2, Interação com o Usuário e Coleta de Dados
  
  printf("\nSistema de Verificação de Notas Avaliativas"); // Título do Sistema.

  printf("\n\nInsira a nota da Prova 01: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p1); // Atribuição do valor inserido à variável p1.
  check(p1); // Confere se 0 <= p1 <= 10.

  printf("\nInsira a nota da Prova 02: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p2); // Atribuição do valor inserido à variável p2.
  check(p2); // Confere se 0 <= p2 <= 10.

  printf("\nInsira a nota da Prova 03: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &p3); // Atribuição do valor inserido à variável p3.
  check(p3); // Confere se 0 <= p3 <= 10.
  
  printf("\nInsira a nota do Trabalho: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &t); // Atribuição do valor inserido à variável t.
  check(t); // Confere se 0 <= t <= 10.
  
  
  
  // Parte 3, Trabalho da Máquina
  
  if(t != 0) { // Rumo A

    m = (p1+p2+p3+t) / 4; // Calcula a Média (atribuição do valor à variável m).

    printf("\n");
    printf("A media avaliativa foi de %.2f", m); // Informa ao Usuário sua media avaliativa.
    
    if (m < 7) { printf("%s", mi_mediabaixo); } // Avisa ao Usuário se ele reprovou (m < 7), atráves de uma Mensagem de Interação (mi_mediabaixo).
    else { printf("%s", mi_aprovado); } // Avisa ao Usuário se ele aprovou (m >= 7), atráves de uma Mensagem de Interação (mi_aprovado).

  } else { // Rumo B

    req = 28 - p1 - p2 - p3; // Equação da media aritética (p1 + p2 + p3 + req)/4 = 7, isolando a variável não declarada (req). 
	
    if (req > 10 ) { // Informa ao Usuário se a nota necessária é maior do que a maior nota possível.
      printf("%s", mi_fim); // Informarma ao Usuário a nota que, teoricamente, seria necessária para aprovação.
      printf(mi_precisa, req); // Informa ao Usuário a nota necessária no trabalho, atráves de uma Mensagem de Interação (mi_precisa).
    } else { // Informa ao Usuário a nota necessária para atingir a media 7.
      printf(mi_notareq, req); // Informa ao Usuário a nota necessária no trabalho, atráves de uma Mensagem de Interação (mi_notareq).
    }

  }

  
  
  // Parte 4, Decisão final com o Usuário
  
  printf("%s", mi_decide); // Pergunta ao Usuário sobre sua decisão, atráves de uma Mensagem de Interação (mi_decide).
  scanf("%d", &d); // Atribuímos à variável d o valor inserido pelo Usuário.
  switch(d) { // Utilizamos o switch pra verificar os diferentes casos 0, 1, e default.
    case 0: printf("%s", mi_final); break; // Caso o Usuário insira 0, o programa é encerrado, atráves de uma Mensagem de Interação (mi_final).
    case 1: main(); break; // Caso o Usuário insira 1, chamamos a função main() e "reiniciamos o programa".
    default: printf("%s", mi_invalid); break; // Caso insira outro valor, informamos a invalidez do dígito, atráves de uma Mensagem de Interação (mi_invalid), e encerramos o programa normalmente.
  }

  return 0;
}


