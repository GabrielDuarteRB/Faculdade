Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/06/2022
Var
   // Seção de Declarações das variáveis

   n1, n2, n3, n4, maior, menor, aux: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Numero 1: ")
   leia(n1)
   maior <- n1
   menor <- n1
   escreva("Numero 2: ")
   leia(n2)
   escreva("Numero 3: ")
   leia(n3)
   escreva("Numero 4: ")
   leia(n4)
   
   para aux de 1 ate 4 faça
        se n(aux) > maior entao
           maior <- n(aux)
        fimse
        se n(aux) < menor entao
           menor <- n(aux)
        fimse
   fimpara
   

Fimalgoritmo