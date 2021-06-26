# ArvoreBinariaDeBusca

Árvore binária é uma árvore de grau máximo igual a 2, cujas subárvores estão ordenadas, ou seja, há uma "raíz-mãe" (R) e, a partir dessa raíz, há as "raízes-filhos" que formam as subárvores tanto do lado esquerdo quanto do lado direito da "raíz-mãe". Uma árvore é de busca binária se todo elemento armazenado na subárvore esquerda é menor que R, se todo elemento armazenado na subárvore direita é maior que R e se as subárvores esquerda e direita também são árvores de busca binária.

Percorrer uma árvore binária significa “processar", de forma sistemática, cada um dos elementos da árvore e esse percurso pode acontecer em pré-ordem, em-ordem ou pós-ordem, por exemplo.

Pré-ordem: Raíz, Esquerda, Direita (R-E-D).
Em-ordem: Esquerda, Raíz, Direita (E-R-D).
Pós-ordem: Esquerda, Direita, Raíz (E-D-R).

O programa em C++ mostrará esses três percursos após a inserção de valores inteiros. O menu é composto por:
    1 - Inserir um número;
    2 - Exibir árvore Pré-Ordem;
    3 - Exibir árvore Pós-Ordem;
    4 - Exibir árvore Em-Ordem;
    5 - Exibir valor máximo;
    6 - Exibir valor mínimo;
    7 - Remover um elemento;
    8 - Fim.
