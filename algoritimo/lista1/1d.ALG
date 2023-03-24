Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/05/2022
Var

tempoGasto: real
velocidade: real
distancia: real
litros_usados: real

Inicio

escreva("Tempo gasto do percurso em horas: ")
leia(tempoGasto)
escreva("Velocidade média durante o percurso em km/h: ")
leia(velocidade)

distancia <- tempoGasto * velocidade
litros_usados <- distancia/12

escreval("Velocidade média: ", velocidade, "km/h")
escreval("Tempo gasto: ", tempoGasto, "h")
escreval("Distância percorrida: ", distancia, "Km")
escreval("Litros usados: ", litros_usados, "L")


Fimalgoritmo