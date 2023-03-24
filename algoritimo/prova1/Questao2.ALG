Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/06/2022
Var
// Seção de Declarações das variáveis 

salario: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Salário: ")
leia(salario)

se salario <= 500 entao
   salario <- salario + (30/100 * salario)
senao
     se salario <= 750 entao
        salario <- salario + (15/100 * salario)
     fimse
fimse

escreva("Seu salário atual é de R$", salario:1:2)

Fimalgoritmo