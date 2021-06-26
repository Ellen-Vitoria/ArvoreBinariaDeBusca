#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include "arvorebinariadebusca.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Bst<int> t1;
    int opc, num;

    //Menu
    do{
        cout<< "\n\t  Á R V O R E   B I N Á R I A   D E   B U S C A       + " <<endl;
        cout<< "\t                                                    _/ \\_" <<endl;
        cout<< "\t  1 - Inserir um Número                           _/     \\_" <<endl;
        cout<< "\t  2 - Exibir Árvore Pré-Ordem                    /         \\" <<endl;
        cout<< "\t  3 - Exibir Árvore Pós-Ordem                   |           |" <<endl;
        cout<< "\t  4 - Exibir Árvore Em-Ordem                     \\_       _/" <<endl;
        cout<< "\t  5 - Exibir Máximo dos Números                    \\_   _/" <<endl;
        cout<< "\t  6 - Exibir Mínimo dos Números                      \\|/  " <<endl;
        cout<< "\t  7 - Remover um Elemento                             | " <<endl;
        cout<< "\t  8 - Fim                                         ____|____       " <<endl;
        cout<< "\t-------------------------------------------------------------\n\t  Selecione: ";
        cin>> opc;

        system("cls");

        cout<< "\n\t  Á R V O R E   B I N Á R I A   D E   B U S C A\n\n";

        switch(opc){
            //Inserir um Número na Árvore
            case 1:
                cout<< "\t  Número: ";
                cin>> num;
                t1.inserir(t1.pRaiz, num);
                break;

            //Exibir Pré-Ordem
            case 2:
                cout<< "\t  Pré-Ordem: ";
                t1.preOrdem(t1.pRaiz);
                break;

            //Exibir Pós-Ordem
            case 3:
                cout<< "\t  Pós-Ordem: ";
                t1.posOrdem(t1.pRaiz);
                break;

            //Exibir Em-Ordem
            case 4:
                cout<< "\t  Em-Ordem: ";
                t1.emOrdem(t1.pRaiz);
                break;

            //Máximo dos Nº
            case 5:
                cout<< "\t  Máximo: " <<t1.getMax(t1.pRaiz);
                break;

            //Mínimo dos Nº
            case 6:
                cout<< "\t  Mínimo: " <<t1.getMin(t1.pRaiz);
                break;

            //Remover Elemento
            case 7:
                cout<< "\t  Remover Número: ";
                cin>> num;
                t1.remover(t1.pRaiz, num);
                break;

            //Fim
            case 8:
                cout<< "\t  Fim..........................................\n\n\t ";
                return 0;
                break;

            //Se for digitado outro Valor:
            default:
                continue;
                break;
        }
        cout<< "\n\n\t  ";
        system("pause");
        system("cls");
    }
    while(opc != 8);
}
