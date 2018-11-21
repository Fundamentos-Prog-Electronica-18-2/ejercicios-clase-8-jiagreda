#include <iostream>

using namespace std;

int main()
{
    string nombre;
    string apellido;
    int edad;

    cout << "Ingrese su nombre por favor" << endl;
    cin >> nombre;
    cout << "Ingrese su apellido por favot" << endl;
    cin >> apellido;
    cout << "Ingrese su edad por favor" << endl;
    cin >> edad;

    if (edad < 10){
        cout << nombre << apellido << endl
        << "con " << edad << " años" << endl
        << "Pertenece al Basico";
    }else{

        if (edad >= 10 && edad < 14){
        cout << nombre << " " << apellido << endl
        << "tiene " << edad << " años" << endl
        << "Pertenece al Basico Superior";
        }else{
            if (edad >= 14 && edad <= 17){
            cout << nombre << " " << apellido << " tiene " << edad << " años" << endl
            << "Pertenece al Bachillerato Unificado";
            }else{
                cout << "Fuera de rango" << endl;
            }
        }
    }
    return 0;
}
