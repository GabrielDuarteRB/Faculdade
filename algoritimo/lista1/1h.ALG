Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Se��o de Declara��es das vari�veis 
volume: real
comprimento: real
largura: real
altura: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Comprimento da caixa em metros: ")
leia(comprimento)
escreva("Largura da caixa em metros: ")
leia(largura)
escreva("Altura da caixa em metros: ")
leia(altura)

volume <- comprimento * largura * altura
escreva("O volume dessa caixa �: ", volume, "m�")

Fimalgoritmo