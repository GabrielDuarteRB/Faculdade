Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Seção de Declarações das variáveis 
a: caractere
b: caractere
aux: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Variável A: ")
leia(a)
escreva("Variável B: ")
leia(b)

aux <- a
a <- b
b <- aux

escreval("As variáveis foram trocadas!")
escreval("A: ", a)
escreval("B: ", b)

Fimalgoritmo