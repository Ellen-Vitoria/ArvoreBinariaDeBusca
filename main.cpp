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
        cout<< "\n\t  � R V O R E   B I N � R I A   D E   B U S C A       + " <<endl;
        cout<< "\t                                                    _/ \\_" <<endl;
        cout<< "\t  1 - Inserir um N�mero                           _/     \\_" <<endl;
        cout<< "\t  2 - Exibir �rvore Pr�-Ordem                    /         \\" <<endl;
        cout<< "\t  3 - Exibir �rvore P�s-Ordem                   |           |" <<endl;
        cout<< "\t  4 - Exibir �rvore Em-Ordem                     \\_       _/" <<endl;
        cout<< "\t  5 - Exibir M�ximo dos N�meros                    \\_   _/" <<endl;
        cout<< "\t  6 - Exibir M�nimo dos N�meros                      \\|/  " <<endl;
        cout<< "\t  7 - Remover um Elemento                             | " <<endl;
        cout<< "\t  8 - Fim                                         ____|____       " <<endl;
        cout<< "\t-------------------------------------------------------------\n\t  Selecione: ";
        cin>> opc;

        system("cls");

        cout<< "\n\t  � R V O R E   B I N � R I A   D E   B U S C A\n\n";

        switch(opc){
            //Inserir um N�mero na �rvore
            case 1:
                cout<< "\t  N�mero: ";
                cin>> num;
                t1.inserir(t1.pRaiz, num);
                break;

            //Exibir Pr�-Ordem
            case 2:
                cout<< "\t  Pr�-Ordem: ";
                t1.preOrdem(t1.pRaiz);
                break;

            //Exibir P�s-Ordem
            case 3:
                cout<< "\t  P�s-Ordem: ";
                t1.posOrdem(t1.pRaiz);
                break;

            //Exibir Em-Ordem
            case 4:
                cout<< "\t  Em-Ordem: ";
                t1.emOrdem(t1.pRaiz);
                break;

            //M�ximo dos N�
            case 5:
                cout<< "\t  M�ximo: " <<t1.getMax(t1.pRaiz);
                break;

            //M�nimo dos N�
            case 6:
                cout<< "\t  M�nimo: " <<t1.getMin(t1.pRaiz);
                break;

            //Remover Elemento
            case 7:
                cout<< "\t  Remover N�mero: ";
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
