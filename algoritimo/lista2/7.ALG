Algoritmo "7"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/05/2022
Var
// Seção de Declarações das variáveis 
nota1: real
nota2: real
nota3: real
media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Nota 1: ")
leia(nota1)
escreva("Nota 2: ")
leia(nota2)
escreva("Nota 3: ")
leia(nota3)

media <- (nota1 + nota2 + nota3)/3

se media >= 7 entao
     escreval("Aprovado")
senao
     escreval("Reprovado")
fimse

Fimalgoritmo