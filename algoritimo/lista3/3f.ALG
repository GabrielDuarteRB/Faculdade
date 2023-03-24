Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/07/2022
Var
// Seção de Declarações das variáveis 

n, aux, soma: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

repita

escreva("Numero: ")
leia(aux)

se aux > 0 entao
   n <- n + 1
   soma <- soma + aux
fimse

ate aux < 0

escreval("Quantidade de números: ", n)
escreval("Soma dos números: ", soma)
se n > 0 entao
   escreval("Média dos numeros: ", soma/n)
senao
     escreval("A média é zero")
fimse

Fimalgoritmo