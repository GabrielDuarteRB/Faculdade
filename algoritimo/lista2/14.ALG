Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/05/2022
Var
// Seção de Declarações das variáveis 
pib: real
cidade: caractere
rendaPerCapita: real
habitantes: inteiro
tamanho: real
fpm: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Pib do país: ")
leia(pib)
escreva("Cidade: ")
leia(cidade)
escreva("Renda per capita da cidade: ")
leia(rendaPerCapita)
escreva("Número de habitantes: ")
leia(habitantes)
escreva("Tamanho da cidade: ")
leia(tamanho)

se (rendaPerCapita < 2000) e (habitantes <= 20000) ou (tamanho < 10000) entao
   fpm <- pib * 5/100
   escreval("Nome da cidade:", cidade)
   escreval("Valor do FPM: R$", fpm:1:2)
senao
   escreva("O(A) ", cidade, " não teve direito a este fundo")

fimse



Fimalgoritmo