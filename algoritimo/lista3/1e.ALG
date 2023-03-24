Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/06/2022
Var
   // Seção de Declarações das variáveis

   a, b, c, r1, r2: real


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("A: ")
   leia(a)
   enquanto a = 0 faça
      escreva("A: ")
      leia(a)
   fimenquanto
   escreva("B: ")
   leia(b)
   escreva("C: ")
   leia(c)

   se b^2 >= (-4 * a * c) entao
      r1 <- (-b + (b^2 -4 * a * c)^1/2)/2*a
      escreval("Raiz 1: ", r1)
      r2 <- (-b - (b^2 -4 * a * c)^1/2)/2*a
      escreval("Raiz 2: ", r2)
   senao
      escreval("Equação sem raiz")
   fimse
   
Fimalgoritmo