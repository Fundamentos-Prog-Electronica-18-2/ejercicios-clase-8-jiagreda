#include <iostream>

using namespace std;

int main()
{
    int numero;
    int limite;
    int contador = 0;
    int operacion = 0;
    int opcion;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    cout << "Ingrese el limite" << endl;
    cin >> limite;
    cout << "Ingrese la opcion" << endl;
    cin >> opcion;

    if (opcion == 1){
            while(contador <= limite){

                operacion = numero * contador;
                cout << numero <<" * " <<contador <<" = " << operacion << endl;
                contador = contador + 1;
            }
        }else{
            if (opcion == 2){
                    while(contador <= limite){

                        operacion = numero + contador;
                        cout << numero <<" + " <<contador <<" = " << operacion << endl;
                        contador = contador + 1;
                    }
            }else{
                cout << "Opcion incorrecta" << endl;

        }
    }

    return 0;
}
