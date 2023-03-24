Algoritmo "Estoque de produtos"
//
//
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Gabriel Duarte e Bernardo Neumann
// Data atual  : 12/07/2022
Var
   // Seção de Declarações das variáveis
   modelos: vetor [ 1..50] de caractere
   marcas: vetor [ 1..50] de caractere
   ano: vetor [ 1..50] de inteiro
   modeloEscolhido: caractere
   opcao, cont, contAutomovel, a, i: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...


   cont <- 1
   enquanto opcao <> 3 faca
      opcao <- 5
      enquanto ((opcao > 3) ou (opcao < 1)) faca
         escreval("=-=-=-=-=-BEM VINDO À CONCESSIONÁRIA LUVA DE MECÂNICO-=-=-=-=-=")
         escreval("Escolha uma opção:")
         escreval("1 - Adicionar automóvel")
         escreval("2 - Conferir estoque")
         escreval("3 - Sair")
         escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=-==-=-=-=-=-==-=-=-=")
         leia(opcao)
         limpatela()
      fimenquanto


      escolha opcao
      caso 1
         escreva("Marcas: ")
         leia(marcas[cont])
         escreva("Modelo: ")
         leia(modelos[cont])
         escreva("Ano: ")
         leia(ano[cont])
         limpatela()
         escreval("Automóvel adicionado")
         cont <- cont + 1
      caso 2
         se cont <> 1 entao
            contAutomovel <- 0
            escreva("Selecione um modelo: ")
            leia(modeloEscolhido)
            limpatela()
            para i de 1 ate 50 faca
               se modelos[i] = modeloEscolhido entao
                  contAutomovel <- i
                  escreval("Automóvel encontrado!")
                  escreval("Marca: ", marcas[i])
                  escreval("Modelo: ", modelos[i])
                  escreval("Ano: ", ano[i])
                  escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=")
               fimse
            fimpara
            se contAutomovel = 0 entao
               escreval("Automóvel não encontrado!")
            fimse
            escreval("Digite enter para continuar")
            leia(a)
            limpatela()
         senao
            escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=")
            escreval("Você ainda não cadastrou nenhum produto!")
            escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=")
            escreval("Digite enter para continuar")
            leia(a)
            limpatela()
         fimse
      caso 3
         escreval("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
         escreval("|                   Ta indo embora por quê?                 |")
         escreval("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
      fimescolha

   fimenquanto



Fimalgoritmo