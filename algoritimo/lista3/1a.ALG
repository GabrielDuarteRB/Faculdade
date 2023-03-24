Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/06/2022
Var
   // Seção de Declarações das variáveis

   var1, var2 : inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Valor 1: ")
   leia(var1)
   escreva("Valor 2: ")
   leia(var2)

   se var1 > var2 entao
      escreval("Valor da diferença é ", var1 - var2)
   senao
      se var1 < var2 entao
         escreval("Valor da diferença é ", var2 - var1)
      senao
         escreval("Valor da diferença é 0")
      fimse
   fimse

Fimalgoritmo