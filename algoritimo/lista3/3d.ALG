Algoritmo "semnome"
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/07/2022
Var
// Se��o de Declara��es das vari�veis 

n: inteiro
graosQuadrado, acumulador: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

n <- 0
graosQuadrado <- 1

repita

n <- n + 1
acumulador <- acumulador + graosQuadrado
graosQuadrado <- graosQuadrado * 2

ate n = 64

escreva(acumulador)


Fimalgoritmo

