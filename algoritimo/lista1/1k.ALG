Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Se��o de Declara��es das vari�veis 
cotacao: real
brl: real
usd: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Cota��o do dolar hoje: ")
leia(cotacao)
escreva("Quantidade de reais disponiveis: ")
leia(brl)

usd <- brl / cotacao

escreva("Voc� possui $", usd:1:2)

Fimalgoritmo