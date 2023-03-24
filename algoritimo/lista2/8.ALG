Algoritmo "7"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/05/2022
Var
// Seção de Declarações das variáveis
avi: real
avii: real
aviii: real
media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("AVI: ")
leia(avi)
escreva("AVII: ")
leia(avii)
escreva("AVIII: ")
leia(aviii)

media <- (avi + avii + aviii)/3

se (media >= 7) e (media <= 10) entao
     escreval("Conceito A")
senao
     se (media >= 5) e (media < 7) entao
          escreval("Conceito B")
     senao
          se media < 5 entao
               escreval("Conceito C")
          senao
               escreval("Você informou as notas erradas!")
          fimse
     fimse
fimse

Fimalgoritmo