Algoritmo "semnome"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/06/2022
Var
   // Se��o de Declara��es das vari�veis

   n1, n2, n3, n4, media: real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

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
      escreva("Aprovado com m�dia ", media:1:1)
   senao
      escreva("Reprovado com m�dia ", media:1:1)
   fimse


Fimalgoritmo