Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Seção de Declarações das variáveis 
a,b,c: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Medida do lado A em metros: ")
leia(a)
escreva("Medida do lado B em metros: ")
leia(b)
escreva("Medida do lado C em metros: ")
leia(c)

Se (a+b>c) e (abs(a-b)<c) e (a+c>b) e (abs(a-c)<b) e (b+c>a) e (abs(b-c)<a)entao
   Se (a=b) ou (a=c) ou (b=c) entao
      Se (a=b) e (b=c) entao
         escreva("equilatero")
      Senao
           escreva("isósceles")
      Fimse
   Senao
      escreva("escaleno")
   Fimse
Senao
     escreva("Não forma um triângulo")
FimSe

Fimalgoritmo