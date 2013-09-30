#include <iostream>
#include <cmath>

using namespace std;

bool esPrimer (int n){
//Pre: n; n>0
//Post: boolea que indica si n es primer o no.

    int i, aux;
    bool b=false;
    i=2;
    aux = 0;
    while (i<= sqrt(n)&& aux==0){
        if (n%i==0){
            aux = 1;
        }
        else i++;
    }
    if (aux==0) b=true;
    return b;
}

//Entrada: n; n> 0;
//Sortida: missatge en pantalla amb els "n" primers numeros primers guardats a "primer".

int main()
{
    //Declaració de variables:
    int n, it, primer;

    primer = 2;
    it=1;
    cout << "INTRODUEIX VALOR:" << endl;
    cin >> n;
    cout << "ELS " << n << " PRIMERS NOMBRES PRIMERS SON:" << endl;

    while (it <= n){
        if(esPrimer(primer)){
            cout << primer << endl;
            primer= primer + 1;
            it=it+1;
        }
        else primer = primer +1;
    }
    return 0;
}
