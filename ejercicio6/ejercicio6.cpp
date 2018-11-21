#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int opcion = 0;
    int resultado = 0;
    cout << "Ingrese el valor de a" << endl;
    cin >> a;
    cout << "Ingrese el valor de b" << endl;
    cin >> b;
    cout << "Ingrese el valor de c" << endl;
    cin >> c;
    cout << "Ingrse su opcion" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            resultado = a+b+c;
            cout << "El valor es " << resultado << endl;
            break;
        case 2:
            resultado = a*b*c;
            cout << "El valor es " << resultado << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            cout << "... ingrese un valor entre... " << endl;
            cout << "1 y 2" << endl;
    }
    return 0;
}
