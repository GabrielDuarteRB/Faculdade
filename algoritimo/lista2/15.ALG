Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2022
Var
// Seção de Declarações das variáveis 
idade: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Idade: ")
leia(idade)

se idade < 16 entao
   escreva("Não votante")
senao
   se (idade > 18) e (idade < 65) entao
      escreva("Eleitor obrigatório")
   senao
      escreva("Eleitor facultativo")
   fimse
fimse

Fimalgoritmo