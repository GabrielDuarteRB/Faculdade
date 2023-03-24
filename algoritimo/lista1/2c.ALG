Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var
// Seção de Declarações das variáveis 
a, b, c, vn, vb, vv, vt: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Quantidade de votos do candidáto A: ")
leia(a)
escreva("Quantidade de votos do candidáto B: ")
leia(b)
escreva("Quantidade de votos do candidáto C: ")
leia(c)
escreva("Quantidade de votos do candidáto Nulo: ")
leia(vn)
escreva("Quantidade de votos do candidáto Branco: ")
leia(vb)

vv <- a + b + c
vt <- vv + vn + vb

escreval("Número total de eleitores:", vt)
escreval("Percentual de votos válidos: ", vv/vt*100:1:1, "%")
escreval("Percentual de votos do A: ", a/vt*100:1:1, "%")
escreval("Percentual de votos do B: ", b/vt*100:1:1, "%")
escreval("Percentual de votos do C: ", c/vt*100:1:1, "%")
escreval("Percentual de votos nulos: ", vn/vt*100:1:1, "%")
escreval("Percentual de votos em branco: ", vb/vt*100:1:1, "%")



Fimalgoritmo