Algoritmo "Finobacci"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 25/10/2022


Var
// Se??o de Declara??es das vari?veis 


//ALUNO : WILLIAN BORGES DE MELLO
//Matricula : 20224301080
//TURMA : 2022.4

v1, v2, next ,c, val, termo : inteiro


Inicio
      escreval ("PsoudoC?digo Finobacci")

      v1 <- 34;
      v2 <- 55;
      c  <- 2;
      termo <- 1;

      escreval ("Digite a quantidade ")
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