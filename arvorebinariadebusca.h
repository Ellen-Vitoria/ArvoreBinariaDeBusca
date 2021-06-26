#ifndef ARVOREBINARIADEBUSCA_H_INCLUDED
#define ARVOREBINARIADEBUSCA_H_INCLUDED
#include <iostream>
using namespace std;

template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *pEsq;
    Node<Tipo> *pDir;
};

//� preciso escrever escrever o template novamente
template <typename Tipo>
struct Bst{
    Node<Tipo> *pRaiz;
    Bst(){
        pRaiz=NULL;
    }
/*
    ~Bst(){
        delete pRaiz;
    }
*/

    //Inserir
    void inserir(Node<Tipo> *&t,Tipo x){
        if(t==NULL){
            t=new Node<Tipo>;
            t->info = x;
            t->pEsq = NULL;
            t->pDir = NULL;
        }
        else{
            if(x < t->info){
                inserir(t->pEsq,x);
            }
            else{
                inserir(t->pDir,x);
            }
        }
    }

    //Percurso Pr�-Ordem
    void preOrdem(Node<Tipo> *t){
        if(t!=NULL){
            cout<< t->info <<" ";
            preOrdem(t->pEsq);
            preOrdem(t->pDir);
        }

    }

    //Percurso P�s-Ordem
    void posOrdem(Node<Tipo> *t){
        if(t!=NULL){
            posOrdem(t->pEsq);
            posOrdem(t->pDir);
            cout<< t->info <<" ";
        }
    }

    //Percurso Em-Ordem
    void emOrdem(Node<Tipo> *t){
        if(t!=NULL){
            emOrdem(t->pEsq);
            cout<< t->info <<" ";
            emOrdem(t->pDir);
        }
    }

    //Valor m�ximo
    int getMax(Node<Tipo> *t){
        if(t!=NULL){
            Node<Tipo> *aux;
            aux = t;
            //Verificar apenas do lado Direito da �rvore
            while(aux->pDir != NULL){
                aux = aux->pDir;
            }
            return aux->info;
        }
        return 0;
    }

    //Valor m�nimo
    int getMin(Node<Tipo> *t){
        if(t!=NULL){
           Node<Tipo> *aux;
           aux = t;
           //Verificar apenas do lado Esquerdo da �rvore
           while(aux->pEsq!=NULL){
               aux = aux->pEsq;
           }
           return aux->info;
        }
        return 0;
    }

    //Remover
    void remover(Node<Tipo> *&t, Tipo x){
        if(t!=NULL){
            Node<Tipo> *aux;
            //Se N�mero � menor que elemento da Ra�z
            if(x < t->info){
                remover(t->pEsq, x);
            }
            //Se N�mero � maior que elemento da Ra�z
            else if(x > t->info){
                remover(t->pDir, x);
            }
            //Se Esquerda da Ra�z � NULL
            else if(t->pEsq == NULL){
                aux = t;
                t = t->pDir;
                delete aux;
            }
            //Se Direita da Ra�z � NULL
            else if(t->pDir == NULL){
                aux = t;
                t = t->pEsq;
                delete aux;
            }
            else{
                aux = t->pEsq;

                while (aux->pDir != NULL)
                {
                    aux = aux->pDir;
                }
                t->info = aux->info;
                aux->info = x;
                remover(t->pEsq, x);
            }
        }
    }
};




#endif // ARVOREBINARIADEBUSCA_H_INCLUDED
