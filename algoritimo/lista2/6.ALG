Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/05/2022
Var
// Se��o de Declara��es das vari�veis 
valorEmprestimo: real
valorJuros: real
valorPagar: real
valorParcela: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva("Valor do emprestimo: R$")
leia(valorEmprestimo)

valorJuros <- valorEmprestimo * 12/100
valorPagar <- valorJuros + valorEmprestimo
valorParcela <- valorPagar/12

escreval("Valor Emprestimo: R$", valorEmprestimo:1:2)
escreval("Valor Juros: R$", valorJuros:1:2)
escreval("Valor Pagar: R$", valorPagar:1:2)
escreval("Valor Parcela: R$", valorParcela:1:2)


Fimalgoritmo