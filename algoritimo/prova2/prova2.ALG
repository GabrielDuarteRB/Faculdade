Algoritmo "Estoque de produtos"
//
//
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Gabriel Duarte e Bernardo Neumann
// Data atual  : 12/07/2022
Var
   // Se��o de Declara��es das vari�veis
   modelos: vetor [ 1..50] de caractere
   marcas: vetor [ 1..50] de caractere
   ano: vetor [ 1..50] de inteiro
   modeloEscolhido: caractere
   opcao, cont, contAutomovel, a, i: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...


   cont <- 1
   enquanto opcao <> 3 faca
      opcao <- 5
      enquanto ((opcao > 3) ou (opcao < 1)) faca
         escreval("=-=-=-=-=-BEM VINDO � CONCESSION�RIA LUVA DE MEC�NICO-=-=-=-=-=")
         escreval("Escolha uma op��o:")
         escreval("1 - Adicionar autom�vel")
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
         escreval("Autom�vel adicionado")
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
                  escreval("Autom�vel encontrado!")
                  escreval("Marca: ", marcas[i])
                  escreval("Modelo: ", modelos[i])
                  escreval("Ano: ", ano[i])
                  escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=")
               fimse
            fimpara
            se contAutomovel = 0 entao
               escreval("Autom�vel n�o encontrado!")
            fimse
            escreval("Digite enter para continuar")
            leia(a)
            limpatela()
         senao
            escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=")
            escreval("Voc� ainda n�o cadastrou nenhum produto!")
            escreval("=-==-=-=-=-=-==-=-=-=-=-==-=-=-=-=-==-=-=")
            escreval("Digite enter para continuar")
            leia(a)
            limpatela()
         fimse
      caso 3
         escreval("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
         escreval("|                   Ta indo embora por qu�?                 |")
         escreval("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
      fimescolha

   fimenquanto



Fimalgoritmo