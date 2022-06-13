# UM
 
 Para este primeiro exercício as estruturas de lista foram utilizadas. As listas são, dentros das três estruturas trabalhadas, as mais versáteis de se trabalhar, uma vez que elas não têm restrições de inserção e remoção como as próximas estruturas. 

# Letra A

Para este problema, a versão dinâmica da lista foi utilizada. No próprio main, uma lista vazia foi iniciada e os valores 11, 22, e 33 foi inserido nela, tal fila serve como input para as funções que calculam quantos pares e impares existem na fila, a primeira função calcula esse número com um laço de repetição while, que com a ajuda de um AUX caminha do começo ao fim da lista e incrementa número de pares ou impares com um operador ternário.

Já a função de recurção recebe a principio o first da lista, e daí se o ponteiro prox não der nulo (o que sinaliza que a lista acabou), um ernário incrementa o número de pares ou impares baseado no val do bloco recebido e chama a mesma função novamente dando agora o proximo bloco da lista.

# Letra B

Neste problema, a função de fazer listas aleatórias foi apropriada do exercício de fazer um caminho pela maior soma, no começo do curso. Como esse exercicio pede para parear as listas, listas lineares foram utilizadas para facilitar tal processo. Após a função "makerandlist" finalizar as listas, a função Jogo começa. Esta pareia as listas e decide um número aleatório, então subtraindo esse número de cada par e mostrando a maior lista remanescente.

# Letra C

Como tratado em sala, vimos o quão difícil esse problema é com uma lista dinâmica. Mas com listas lineares, ele é bem simples. Após dado o input do tamanho da lista, duas listas aleatórias são mostradas, utilizando uma função quase idêntica a da letra b. Assim que as listas estão formadas, a função "juntaLista" as junta por meio de um laço de repetição, a primeira tendo seu vetor subindo com o valor do laço enquanto a segunda tem tal valor subtraido de seu total, assim uma começa em vet[0] e a outra em vet[j - 0] (j é apenas n-1, já que em c os vetores começam em 0).

# Letra D

Assim como as questão anterior, para esse problema uma função recebe o tamanho das listas e produz duas listas lineares aleatórias. A proxima função então calcula a euclidiana entre as duas listas, fazendo dois vetores que recebem os valores da euclidiana para cada indice. Assim que isso é feito, um dos vetores é organizado por ShellSort, e assim subtraindo dois de seus valores por vez, conseguimos ver quais valores das listas são os mais próximos. Utilizando o indice do vetor de euclidiana não organizado, obtemos tambem o indice dos valores nas listas. 

# Make File

Como executar:

  make clean - Apaga a última compilação realizada contida na pasta build
  
  make - Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build
  
  make run - Executa o programa da pasta build após a realização da compilação
