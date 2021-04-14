/*

Software 3

(AWPM)

Desenvolvido por Vitor Espindola e Guilherme Kollet.

*/

/*
Objetivo:
Você deve escrever um programa que calcule o salário nal de um funcionário da Abangu
Corporation. O cálculo de salário nal é bastante simples:
• Seu programa deve receber o salário base b do funcionário.
• Seu programa deve receber o número de dependentes d do funcionário.
• Seu programa deve receber o número de anos de casa c do funcionário.
• Seu programa deve receber o ano atual a.
• O funcionário recebe um acréscimo de 3% sobre o salário base para cada dependente que
ele tem (até o máximo de 3 dependentes).
• Se o funcionário tem menos de 3 dependentes, ele recebe um acréscimo de 4% sobre o
salário base para cada 6 anos de casa que ele tem (até o máximo de 5 acréscimos).
• Se o funcionário tem 3 ou mais dependentes ele recebe um acréscimo de 8% sobre o salário
base para cada 8 anos de casa que ele tem (até o máximo de 4 acréscimos).
• Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto.
*/

#include <stdio.h>
#include <stdlib.h>

/*
O método check tem como objetivo evitar possíveis casos indesejados
para o funcionamento do programa e alertar ao Uusuário sobre o problema.

O método check tem como parâmetro um float n, e esse será utilizado
através das variáveis salario_base, dependentes, anos_casa e ano_atual,
atribuídas pelo Usuário.

O método check erá utilizado no decorrer do programa para verificar
se o valor atribuído pelo input à variável se encontra seja positivo.


Se n < 0, o programa imprime a mensagem "Digito invalido. O valor inserido nao pode ser negativo."
e encerra seu funcionamento.
*/

int check (float n) {
    if(n < 0) { // Checa se o valor inserido é maior do que negativo.
        printf("\nDigito invalido. O valor inserido nao pode ser negativo.\n"); // Imprime aviso na tela.
        exit(0); // Encerra o programa.
    }
    return 0;
}

/* 

O método main executa a principal função do programa (descrita no topo do programa).

Parte 1, Declarando as Variáveis:
Nas primeiras linhas são criadas todas as variáveis que serão necessárias ao longo do programa:

Salário Base;
Dependentes;
Anos de Casa;
Ano Atual;
Salário Final;
Acréscimo;
Contador.



Parte 2, Interação com o Usuário e Coleta de Dados:
Logo após, são escritos os comandos referentes a interação com o Usuário.

São impressas instruções ao Usuário para que o mesmo insira os valores, e,
logo em seguida, o programa lê o input e atribui seu valor à variável correspondente.

Para concluir a interação, após cada valor inserido pelo Usuário, é utilizado o método check, já descrito anteriormente,
para checar sua validade (e avisar o Usuário, caso necessário).



Parte 3, Trabalho da Máquina:

Nessa parte, o software vai realizar todas operações matemáticas 
a fim de obter o resultado desejado.

O Trabalho da Máquina insere o Usuário, de acordo com os dados passados, nos termos definidos pela empresa.

De acordo com cada termo presente no objetivo do programa, o Usuário tem seu salario base acrescido 
pela porcentagem definida.

Nos casos que envolvem os dependentes, a fim de limitar os acréscimos,
é declarada a condição em que, caso do Usuário possuir valor maior do que o máximo de depententes, 
independentemente do valor, o acréscimo é sempre multiplicado pelo limite definido nos termos.

Nos casos que envolvem anos de casa, para calcular a quantidade de acréscimos, é realizada a simples operação
anos de casa / anos para acréscimo, e o resultado dessa divisão é atribuiído à variável contador;
Logo após, o acrescimo é calculado por porcetagem do salário base * contador; 

No caso que envolve ano bissexto, foi desenvolvido um rápido algoritmo pra verificar 
se o ano inserido é ou não bissexto.
Ano bissexto: Ele deve ser divisível por quatro. Se for um ano terminado em 00, deve ser também divisível por 400.



Parte 4, Interação com o Usuário:

Na última parte, informamos ao Usuário o acréscimo obtido.
Logo após, imprimimos o salário final, através da variável salario_final, calculada pela Máquina.



*/

int main()
{

  // Parte 1, Declarando as Variáveis

  float salario_base; // Salário Base;
  int dependentes, anos_casa, ano_atual; // Deoendentes, Anos de Casa, Ano Atual

  float salario_final; // Salário Final
  float a; // Acréscimo
  int contador; // Contador

  salario_final = 0; // Inicializa as variáveis para evitar problemas futuros no Trabalho da Máquina
  a = 0;



  // Parte 2, Interação com o Usuário e Coleta de Dados

  printf("\nBem vindo ao RH ONLINE da Abangu Corporation !\n"); // Imprime a instrução ao Usuário.

  printf("\nSalario base: "); // Imprime a instrução ao Usuário.
  scanf(" %f", &salario_base); // Atribuição do valor inserido à variável salario_base.
  check(salario_base); // Confere se salario_base >= 0.

  printf("\nDependentes: "); // Imprime a instrução ao Usuário.
  scanf(" %d", &dependentes); // Atribuição do valor inserido à variável dependentes.
  check(dependentes); // Confere se dependentes >= 0.

  printf("\nAnos de casa: "); // Imprime a instrução ao Usuário.
  scanf(" %d", &anos_casa); // Atribuição do valor inserido à variável anos_casa.
  check(anos_casa); // Confere se anos_casa >= 0.

  printf("\nAno: "); // Imprime a instrução ao Usuário.
  scanf(" %d", &ano_atual); // Atribuição do valor inserido à variável ano_atual.
  check(ano_atual); // Confere se ano_atual >= 0.



  // Parte 3, Trabalho da Máquina

  // O funcionário recebe um acréscimo de 3% sobre o salário base para cada dependente que ele tem (até o máximo de 3 dependentes).
  if(dependentes > 3)
  {

      a += (salario_base*(0.03))*3; // Limita o máximo de 3 acréscimos e efetua o acréscimo.

  } else {

      a += (salario_base*(0.03))*dependentes; // Efetua o acréscimo.

  }

  // Se o funcionário tem menos de 3 dependentes, ele recebe um acréscimo de 4% sobre o salário base para cada 6 anos de casa que ele tem (até o máximo de 5 acréscimos).
  if (dependentes < 3) {

        contador = anos_casa / 6; // Quantidade de acréscimos

        if(contador > 5) {

            a += (salario_base*(0.04))*5; // Limita o máximo de 5 acréscimos e efetua o acréscimo.

        } else if (contador != 0) {

            a += (salario_base*0.04)*contador; // Efetua o acréscimo.

        }

  }

  // Se o funcionário tem 3 ou mais dependentes ele recebe um acréscimo de 8% sobre o salário base para cada 8 anos de casa que ele tem (até o máximo de 4 acréscimos).
  if(dependentes >= 3) {

      contador = anos_casa / 8; // Quantidade de acréscimos

      if(contador > 4) { 

        a += (salario_base*(0.08))*4; // Limita o máximo de 4 acréscimos e efetua o acréscimo.

      } else if (contador != 0) {

        a += (salario_base*(0.08))*contador; // Efetua o acréscimo.

      }

}

  // Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto*/
  if (ano_atual % 4 == 0) { // O ano bissexto deve ser divisível por quatro.
      if (ano_atual % 100 == 0) { // Se for um ano terminado em 00,
        if(ano_atual % 400 == 0) { // deve ser também divisível por 400.
            a += (salario_base*(0.01)); // Efetua o acréscimo.
        }
      } else {
          a += (salario_base*(0.01)); // Efetua o acréscimo.
	  }
  }

  salario_final = a + salario_base; // Calcula o salário final.



  // Parte 4, Interação Final com o Usuário

  printf("\nAcrescimo: %.2f", a);
  printf("\nSalario Final: %.2f\n", salario_final);


  return 0;

}
