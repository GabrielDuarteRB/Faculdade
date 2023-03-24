Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/07/2022
Var
   // Seção de Declarações das variáveis

   l, c: inteiro
   resp, comodo: caractere

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   repita

         escreva("Cômodo: ")
         leia(comodo)
         escreva("Largura: ")
         leia(l)
         escreva("Comprimento: ")
         leia(c)
         
         escreval("O(A)", comodo, " Possui", l*c, " metros quadrados")
         escreva("Deseja continuar calculando novos cômodos[S/N]? ")
         leia(resp)

   ate resp = "N"



Fimalgoritmo