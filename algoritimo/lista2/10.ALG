Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/05/2022
Var
// Se��o de Declara��es das vari�veis 
nome: caractere
horasTrabalhadas: real
recebeHora: real
filhos: inteiro
salario: real
acrescimoSalario: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Nome do funcion�rio: ")
leia(nome)
escreva("Horas trabalhadas: ")
leia(horasTrabalhadas)
escreva("Recebe por Hora: ")
leia(recebeHora)
escreva("Quantidade de filhos: ")
leia(filhos)

salario <- recebeHora * horasTrabalhadas

se filhos > 3 entao
   acrescimoSalario <- 3 * 3/100 * salario
   salario <- salario + acrescimoSalario
fimse

escreval("Nome: ", nome)
escreval("Salario: R$", salario:1:2)
escreval("Acrescimo obtido: R$", acrescimoSalario:1:2)

Fimalgoritmo