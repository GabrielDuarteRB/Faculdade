Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2022
Var
// Seção de Declarações das variáveis 

a: real
b: real
c: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Valor A: ")
leia(a)
escreva("Valor B: ")
leia(b)
escreva("Valor C: ")
leia(c)


//a b c(F)
//a c b(F)
//b a c(F)
//b c a(F)
//c a b(F)
//c b a(F)
se a > b entao
   se b > c entao
        escreval(c," <", b," <", a)
        escreval("C < B < A")
   senao
        se c > a entao
           escreval(b," <", a," <", c)
           escreval("B < A < C")
        senao
             escreval(b," <", c," <", a)
             escreval("B < C < A")
        fimse
   fimse
senao
     se b > c entao
          se a > c entao
               escreval(c," <", a," <", b)
               escreval("C < A < B")
          senao
               escreval(a," <", c," <", b)
               escreval("A < C < B")
          fimse
     senao
          escreval(a," <", b," <", c)
          escreval("A < B < C")
     fimse
fimse


Fimalgoritmo