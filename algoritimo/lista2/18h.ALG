Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2022
Var
   // Seção de Declarações das variáveis

   numeros: vetor[0..5] de real
   maior: real
   menor: real
   i: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   para i de 0 ate 4 faca
      escreva("Digite um número: ")
      leia(numeros[i])
      maior <- numeros[i]
      menor <- numeros[i]
   fimpara
   escreval(" ")
   para i de 0 ate 4 faca
      se numeros[i] > maior entao
         maior <- numeros[i]
      senao
         se numeros[i] <= menor entao
            menor <- numeros[i]
         fimse
      fimse
   fimpara


   escreva("O maior número é o", maior, " e o menor é o", menor)

Fimalgoritmo