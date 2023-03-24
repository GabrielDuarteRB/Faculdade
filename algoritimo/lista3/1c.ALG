Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/06/2022
Var
   // Seção de Declarações das variáveis

   n1, n2, n3, n4, media: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("nota 1: ")
   leia(n1)
   escreva("nota 2: ")
   leia(n2)
   escreva("nota 3: ")
   leia(n3)
   escreva("nota 4: ")
   leia(n4)

   media <- (n1 + n2 + n3 + n4)/4

   se media >= 5 entao
      escreval("Aluno aprovado com média ", media:1:2)
   senao
      escreval("Aluno reprovado com média ", media:1:2)
   fimse



Fimalgoritmo