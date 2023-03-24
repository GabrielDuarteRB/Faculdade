Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2022
Var
// Seção de Declarações das variáveis 

n1: real
n2: real
n3: real
n4: real
n5: real
media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Primeira nota: ")
leia(n1)
escreva("Segunda nota: ")
leia(n2)
escreva("Terceira nota: ")
leia(n3)
escreva("Quarta nota: ")
leia(n4)

media <- (n1 + n2 + n3 + n4) / 4

se media >= 7 entao
     escreval("Aluno aprovado!")
senao
     escreva("Nota do exame: ")
     leia(n5)
     media <- (media*4+n5)/5
     se media >= 5 entao
          escreval("Aluno aprovado!")
     senao
          escreval("Aluno não foi aprovado!")
     fimse
fimse

escreva("Média do aluno foi", media)

Fimalgoritmo