Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/05/2022
Var
// Seção de Declarações das variáveis 
sexo: caractere
salario: real
idade: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Sexo(F/M): ")
leia(sexo)
escreva("salario: ")
leia(salario)
escreva("idade: ")
leia(idade)

se sexo = "F" entao
     se salario < 1500 entao
          salario <- salario + (salario * 20/100)
          escreval("Seu salário com o aumento é R$", salario:1:2)
     senao
          escreval("Seu salário não teve aumento. Seu salário é de R$", salario:1:2)
     fimse

senao
     escreval("Seu salário não teve aumento. Seu salário é de R$", salario:1:2)
fimse

Fimalgoritmo