Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2022
Var
// Seção de Declarações das variáveis 

altura: real
peso: real
sexo: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Altura, em cm: ")
leia(altura)
escreva("Sexo(M/F): ")
leia(sexo)

se (sexo = "M") ou (sexo = "m") entao
   peso <- 72.7 * altura - 58
   escreva("Peso ideal masculino: ", peso)
senao
   peso <- 62.1 * altura - 44.7
   escreva("Peso ideal feminino: ", peso)
   
fimse

Fimalgoritmo