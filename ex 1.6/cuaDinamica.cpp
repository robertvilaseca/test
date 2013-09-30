#include "cuaDinamica.h"

cuaDinamica::cuaDinamica()
{
    inici = final = NULL;
}

void cuaDinamica::Encua(element e)
{
    node* nou = new node;
    node->dada = e;
    if (Buida()) {
        node->seguent = NULL;
        inici = final = nou;
    }
    else {

    }
}

void cuaDinamica::Desencua()
{
    if (!Buida()){
        node *aux = inici;
        inici = inici->seguent;
        delete aux;
    }
}

element cuaDinamica::Primer() const
{
    return inici->dada;
}

bool cuaDinamica::Buida() const
{
    return inici == NULL;
}

cuaDinamica::~cuaDinamica()
{
    //dtor
}
