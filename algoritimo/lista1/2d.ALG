Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Se��o de Declara��es das vari�veis 
a,b,c: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

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
           escreva("is�sceles")
      Fimse
   Senao
      escreva("escaleno")
   Fimse
Senao
     escreva("N�o forma um tri�ngulo")
FimSe

Fimalgoritmo