Algoritmo "semnome"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2022
Var
   // Se��o de Declara��es das vari�veis

   nome:caractere
   sexo:caractere

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

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