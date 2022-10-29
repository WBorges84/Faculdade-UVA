Algoritmo "Finobacci"
// Disciplina   : LINGUAGEM E TÉCNICA DE PROGRAMAÇÃO
// Descrição   : Cálculo Fibonacci
// ALUNO : WILLIAN BORGES DE MELLO
// Matricula : 20224301080
// TURMA : 2022.4
// Utilizado o Visualg

Var
// Seção de Declarações das variáveis 

v1, v2, next ,c, val, termo : inteiro

Inicio
      escreval ("PsoudoCódigo Finobacci")
      escreval (" ")

      v1 <- 34;
      v2 <- 55;
      c  <- 2;
      termo <- 1;

      escreval ("Digite a quantidade de termos: ")
      leia(val)

      escreval (v1)
      escreval (v2)

  para c de 1 ate val faca
     next <- v1 + v2;
     escreva("Termo: ",termo)
     escreva(" ")
     escreval (next)
     v1 <- v2;
     v2 <- next;
     c <- c + 1;
     termo <- termo + 1;
  fimpara

Fimalgoritmo