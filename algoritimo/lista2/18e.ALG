Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2022
Var
// Seção de Declarações das variáveis 
a: real
b: real
c: real
raiz1: real
raiz2: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("A: ")
leia(a)
escreva("B: ")
leia(b)
escreva("C: ")
leia(c)

se a <> 0 entao
     se b^2-4*a*c > 0 entao
         raiz1 <- (-b + (b^2-4*a*c)^1/2)/2 * a
         raiz2 <- (-b - (b^2-4*a*c)^1/2)/2 * a
         escreva("Raizes:")
         escreva(raiz1)
         escreva(" e")
         escreva(raiz2)
     senao
          escreva("Não possui raiz!")
     fimse
senao
   escreva("Não é uma função do segundo grau. 'A' tem que ser diferente de zero")
fimse

Fimalgoritmo