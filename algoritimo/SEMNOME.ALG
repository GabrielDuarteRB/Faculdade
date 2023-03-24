Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/07/2022
Var
   // Seção de Declarações das variáveis
   A, B: vetor[1..10] de inteiro
   cont, cont2, aux: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   A[1] <- 2
   A[2] <- 23
   A[3] <- 4
   A[4] <- 100
   A[5] <- 7
   A[6] <- 24
   A[7] <- 28
   A[8] <- 64
   A[9] <- 1
   A[10] <- 20

   para cont de 1 ate 10 faca
        para cont2 de 1 ate 10 faca
           se(A[cont] > A[cont2]) entao
                aux <- A[cont]
                A[cont] <- A[cont2]
                A[cont2] <- aux
           fimse
        fimpara
   fimpara
   
   cont2 <- 11
   para cont de 1 ate 10 faca
        B[cont] <- A[cont2 - 1]
        cont2 <- cont2 - 1
   fimpara

Fimalgoritmo