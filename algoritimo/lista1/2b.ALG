Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Seção de Declarações das variáveis 
sm, pr, ns: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Valor do salário: ")
leia(sm)
escreva("Porcentagem do reaguste: ")
leia(pr)

ns <- sm + (sm * pr/100)
escreva("Salário com reajuste: ", ns)

Fimalgoritmo