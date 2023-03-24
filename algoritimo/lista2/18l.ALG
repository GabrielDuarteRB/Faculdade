Algoritmo "semnome"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2022
Var
   // Seção de Declarações das variáveis

   nome:caractere
   sexo:caractere

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreva("Nome: ")
   leia(nome)
   escreva("Sexo(F/M): ")
   leia(sexo)

   se (sexo = "F") ou (sexo = "f") entao
      escreva("Ilma Sra.", nome, ", bem vinda!")
   senao
      escreva("Ilmo Sr.", nome, ", bem vindo!")
   fimse

Fimalgoritmo