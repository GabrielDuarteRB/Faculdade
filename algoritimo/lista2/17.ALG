Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2022
Var
// Seção de Declarações das variáveis 

salario: real
financiamento: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Salário: R$")
leia(salario)
escreva("Financiamento: R$")
leia(financiamento)

se (financiamento <= 5*salario) ENTAO
   escreval("Financiamento concedido")
senao
   escreval("Financiamento negado")
fimse

escreva("Obrigado por nos consultar!")
Fimalgoritmo