Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/07/2022
Var
// Seção de Declarações das variáveis 

n, aux, fat: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

n <- 1

repita

aux <- n
fat <- 1

repita


fat <- fat * aux
aux <- aux - 1

ate aux <= 1

escreval("Fatorial de", n, " é igual a", fat)
n <- n + 2

ate n >= 10

Fimalgoritmo