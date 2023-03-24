Algoritmo "semnome"
//  
//  
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/06/2022
Var
   // Seção de Declarações das variáveis

   morangoKG, macaKG, valor: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Quantos quilos de morango: ")
   leia(morangoKG)
   escreva("Quantos quilos de maça: ")
   leia(macaKG)

   se morangoKG <= 5 entao
      valor <- (2.5 * morangoKG)
   senao
      valor <- (2.2 * morangoKG)
   fimse

   se macaKG <= 5 entao
      valor <- valor + (1.8 * macaKG)
   senao
      valor <- valor + (1.5 * macaKG)
   fimse
   
   se (morangoKG + macaKG > 8) ou (valor > 25) entao
      valor <- valor - (10/100 * valor)
   fimse
   
   escreval("O valor a ser pago pelo cliente deve ser R$", valor:1:2)

Fimalgoritmo