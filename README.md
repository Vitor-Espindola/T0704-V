



# T0704

<br>
<p align="center">
<img src="https://github.com/Vitor-Espindola/T0704-V/blob/master/Frames/T0704_GIF.gif" width="552" height="380" >
</p>
<p align="center">T0704 consiste no cojunto de 3 softwares construídos para uso trivial, programados na Linguagem C.<br><br>Desenvolvido por Vitor Espindola e Guilherme Kollet.</p>

## AWPM

<p align="center">
<img src="https://github.com/Vitor-Espindola/T0704-V/blob/master/Frames/AWPM_GIF.gif">
</p>

**T0704** utiliza a **AWPM**, ou _Architecture and Writing Pattern Model_, como arquitetura de construção e padrão de notação.

A **AWPM** é uma arquitetura de construção e padrão de notação focado na organização e esclarecimento de softwares de uso comum.

**<sigla>** Baseia-se na divisão do script por 4 simples partes. São elas:
- Parte 1, Declaração de Variáveis
- Parte 2, Interação com o Usuário e Coleta de Dados
- Parte 3, Trabalho da Máquina
- Parte 4, Interação Final com o Usuário

Além disso, a **AWPM** determina que os softwares sejam construídos através de dois simples métodos: _check e main_.
> A função _check_ valida os valores inseridos pelo Usuário, enquanto a função _main_ executa o programa e suas respectivas Partes.

Existem, da mesma forma, notações de agentes padrões dentro de todos os códigos: _Usuário, Máquina e Mensagens de Interação_.

> Por arquitetar softwares de uso trivial, <sigla> possui um entendimento muito intuitivo, e auxilia programadores a entenderem os códigos e a editá-los, caso necessário.

A **AWPM**, a fim de auxiliar programadores, também suporta **construção audiovisual** da _Parte 3, Trabalho da Máquina_ - essa que geralmente demanda mais atenção.
Durante a construção dos softwares, várias **produções audiovisuais** foram projetadas para auxiliar na visualização dessa etapa do código.



## Software 1 
### Script Primitivo

O Software 1 possui **duas versões**: _Script Primitivo_ e _Script Refinado_. 
As duas versões se diferenciam pela _Parte 3, Trabalho da Máquina_, por apresentarem diferentes mecanismos de manipulação dos dados.

O objetivo do Software 1 é calcular a média aritmética das notas de uma equipe de ginástica olímpica. Porém, de todas as seis notas dos atletas, o cálculo desse valor utiliza apenas as quatro maiores notas.

<div align="center">
  <a href="https://youtu.be/YR9euMUY12o"><img src="https://github.com/Vitor-Espindola/T0704-V/blob/master/Frames/SOFT1_PRI_GIF.gif" alt="Software 1 (Script Primitivo)" width="552" height="380"></a>
</div>

<p align="center">
Software 1 (Script Primitivo) - Parte 3, Trabalho da Máquina<br>
https://youtu.be/YR9euMUY12o
</p>
<br>

> Como o próprio nome anuncia, por mais que execute seu trabalho corretamente, o _Script Primitivo_ acaba se tornando um **código denso e de difícil visualização**.

    // Parte 3, Trabalho da Máquina
  
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

### Script Refinado

Com o mesmo objetivo que o Software 1 (Script Primitivo), essa versão trabalha com os mesmos dados e interações com o Usuário que sua versão anterior.

A Parte 3, Trabalho da Máquina do Software 1 (Script Refinado), apresenta um laço *For Loop*, que manipula os dados com **mais clareza e simplicidade** comparado ao _Script Primitivo_.

> Essa versão se torna a oficial entre os dois códigos.

<div align="center">
  <a href="https://youtu.be/7U4b0t-6DR8"><img src="https://github.com/Vitor-Espindola/T0704-V/blob/master/Frames/SOFT1_REF_GIF.gif" alt="Software 1 (Script Refinado)" width="552" height="380"></a>
</div>

<p align="center">
Software 1 (Script Refinado) - Parte 3, Trabalho da Máquina<br>
https://youtu.be/7U4b0t-6DR8
</p>
<br>

> Segundo o próprio nome, o _Script Refinado_ se diferencia por tornar o código mais **refinado, simples, e limpo**.

    // Parte 3, Trabalho da Máquina
    
    float notas[6] = {nota_1, nota_2 , nota_3, nota_4, nota_5, nota_6};
    
    for(int n = 0; n < 6; n++) { 
    
      if(notas[n] > a) { d = c; c = b; b = a; a = notas[n]; } 
      else if (notas[n] > b) { d = c; c = b; b = notas[n]; } 
      else if (notas[n] > c) { d = c; c = notas[n];}
      else if (notas[n] > d) { d = notas[n]; }
    
    }
      
    m = (a + b + c + d) / 4;

## Software 2

O Software 2 possui como objetivo calcular a média avaliativa de um aluno a partir de quatro notas (pesos iguais) inseridas. Três das notas inseridas são provas, e a última é uma nota de trabalho.

Há, porém, uma **condição** inserida na nota do trabalho, e, dependendo de sua validade, o programa irá tomar um entre dois possíveis caminhos.

- Caso há valor maior do que zero inserido no trabalho, o programa calcula normalmente a média avaliativa.

- Caso essa nota seja igual a 0, o programa compreende
que ele ainda não foi realizado, e informa ao Usuário a nota necessária, a fim de atingir
média sete.


<div align="center">
  <a href="https://youtu.be/Vao8DseFqq4"><img src="https://github.com/Vitor-Espindola/T0704-V/blob/master/Frames/SOFT2_GIF.gif" alt="Software 2" width="552" height="380"></a>
</div>

<p align="center">
Software 2 - Parte 3, Trabalho da Máquina<br>
https://youtu.be/Vao8DseFqq4
</p>
<br>

> O código torna visível os dois possíveis rumos que o programa há de escolher.

    // Parte 3, Trabalho da Máquina
    
    if(t != 0) { 
  
      m = (p1+p2+p3+t) / 4;
  
      printf("\n");
      printf("A média avaliativa foi de %.2f", m);
      
      if (m < 7) { printf("%s", mi_mediabaixo); }
      else { printf("%s", mi_aprovado); }
  
    } else {
  
      req = 28 - p1 - p2 - p3;
	  
      if (req > 10 ) {
        printf("%s", mi_fim);
        printf(mi_precisa, req);
      } else {
        printf(mi_notareq, req);
      }

    }

## Software 3

O Software 3 é um Sistema de RH cuja finalidade é calcular os acréscimos em cima do salário base dos funcionários.

O código foi construído com base nos termos definidos pela empresa:
- O funcionário recebe um acréscimo de 3% sobre o salário base para cada dependente que
ele tem (até o máximo de 3 dependentes).
- Se o funcionário tem menos de 3 dependentes, ele recebe um acréscimo de 4% sobre o
salário base para cada 6 anos de casa que ele tem (até o máximo de 5 acréscimos).
- Se o funcionário tem 3 ou mais dependentes ele recebe um acréscimo de 8% sobre o salário
base para cada 8 anos de casa que ele tem (até o máximo de 4 acréscimos).
- Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto.

<div align="center">
  <a href="https://youtu.be/CigomcKDWXM"><img src="https://github.com/Vitor-Espindola/T0704-V/blob/master/Frames/SOFT3_GIF.gif" alt="Software 3" width="552" height="380"></a>
</div>

<p align="center">
Software 3 - Parte 3, Trabalho da Máquina<br>
https://youtu.be/CigomcKDWXM
</p>
<br>


> Utilizando a AWPM, a Parte 3, Trabalho da Máquina do Software 3 é de **fácil entendimento e bem intuitiva**.

    // Parte 3, Trabalho da Máquina
  
    if(dependentes > 3)
    {
  
        a += (salario_base*(0.03))*3;
  
    } else {
  
        a += (salario_base*(0.03))*dependentes;
  
    }
  
    if (dependentes < 3) {
  
          contador = anos_casa / 6; // 12 / 6 = 2
  
          if(contador > 5) {
  
              a += (salario_base*(0.04))*5;
  
          } else if (contador != 0) {
  
              a += (salario_base*0.04)*contador; // acrescimo += (salario_base*0.04)*contador;
  
          }
  
    }
  
    if(dependentes >= 3) {
  
        contador = anos_casa / 8;
  
        if(contador > 4) {
  
          a += (salario_base*(0.08))*4;
  
        } else if (contador != 0) {
  
          a += (salario_base*(0.08))*contador;
  
        }
  
    }

    if (ano_atual % 4 == 0) {
        if (ano_atual % 100 == 0) {
          if(ano_atual % 400 == 0) {
              a += (salario_base*(0.01));
          }
        } else {
            a += (salario_base*(0.01));
	    }
    }
  
    salario_final = a + salario_base;

