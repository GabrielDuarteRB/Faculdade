Algoritmo "semnome"
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/07/2022
Var
// Seção de Declarações das variáveis 

n: inteiro
graosQuadrado, acumulador: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

n <- 0
graosQuadrado <- 1

repita

n <- n + 1
acumulador <- acumulador + graosQuadrado
graosQuadrado <- graosQuadrado * 2

ate n = 64

escreva(acumulador)


Fimalgoritmo

