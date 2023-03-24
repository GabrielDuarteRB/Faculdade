Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Seção de Declarações das variáveis 
volume: real
comprimento: real
largura: real
altura: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Comprimento da caixa em metros: ")
leia(comprimento)
escreva("Largura da caixa em metros: ")
leia(largura)
escreva("Altura da caixa em metros: ")
leia(altura)

volume <- comprimento * largura * altura
escreva("O volume dessa caixa é: ", volume, "m³")

Fimalgoritmo