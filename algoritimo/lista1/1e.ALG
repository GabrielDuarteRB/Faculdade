Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var

valor: real
prestacao: real
taxa: real
meses: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Valor a ser pago em real: ")
leia(valor)
escreva("Taxa a ser paga em %: ")
leia(taxa)
escreva("Tempo de atraso em meses: ")
leia(meses)

prestacao <- valor + (valor * taxa/100) * meses
escreva("A presta��o a ser paga � ", prestacao:1:2)

Fimalgoritmo