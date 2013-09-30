#include <iostream>
#include "cuaDinamica.h"
using namespace std;

int main()
{
    cuaDinamica q;
    int n;

    cin >> n;
    while (n != 0) {
        if (n > 0) q.Encua(n);
        else q.Desencua();
        cout << q.primer() << ' ';
        cin >> n;
    }
    while (!q.Buida()){
        q.Desencua();
        cout << q.primer() << ' ';
    }
    count << endl;
    return 0;
}
