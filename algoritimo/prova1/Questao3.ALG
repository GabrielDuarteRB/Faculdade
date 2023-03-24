Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/06/2022
Var
   // Seção de Declarações das variáveis

   n1, n2, n3, n4, media: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Nota 1: ")
   leia(n1)

   escreva("Nota 2: ")
   leia(n2)

   escreva("Nota 3: ")
   leia(n3)

   escreva("Nota 4: ")
   leia(n4)

   media <- (n1 + n2 + n3 + n4)/4

   se media >= 7 entao
      escreva("Aprovado com média ", media:1:1)
   senao
      escreva("Reprovado com média ", media:1:1)
   fimse


Fimalgoritmo