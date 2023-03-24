Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Seção de Declarações das variáveis 
cotacao: real
brl: real
usd: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Cotação do dolar hoje: ")
leia(cotacao)
escreva("Quantidade de reais disponiveis: ")
leia(brl)

usd <- brl / cotacao

escreva("Você possui $", usd:1:2)

Fimalgoritmo