Algoritmo "semnome"

Var
   // Seção de Declarações das variáveis

   a, b, c, aux: real
   numeros : vetor[1..3] de real
   indice1, indice2: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("A: ")
   leia(numeros[1])
   escreva("B: ")
   leia(numeros[2])
   escreva("C: ")
   leia(numeros[3])
   
   para indice1 de 1 ate 3 faça
        para indice2 de 1 ate 3 faca
             se (numeros[indece1] > numeros[indice2]) entao
                aux <- numeros[indice1]
                numeros[indice1] <- numeros[indice2]
                mumeros[indice2] <- aux
             fimse
        fimpara
   fimpara

   escreva(numeros)
Fimalgoritmo