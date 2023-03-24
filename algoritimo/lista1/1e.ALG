Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var

valor: real
prestacao: real
taxa: real
meses: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Valor a ser pago em real: ")
leia(valor)
escreva("Taxa a ser paga em %: ")
leia(taxa)
escreva("Tempo de atraso em meses: ")
leia(meses)

prestacao <- valor + (valor * taxa/100) * meses
escreva("A prestação a ser paga é ", prestacao:1:2)

Fimalgoritmo