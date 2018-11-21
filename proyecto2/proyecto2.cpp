#include <iostream>

using namespace std;

int main()
{
    cout << "Resolucion de una ecuacion de primer grado" << endl;
    double a = 0;
    double b = 0;
    double resultado = 0;

    if(a!=0){
        resultado = -b/a;
        cout<< "El resultado es :"<< resultado << endl;
    }else{
        if(b!=0){
            cout << "solucion imposible"<< endl;
        }else{
            cout << "solucion indeterminada"<< endl;
        }
    }
    return 0;
}
