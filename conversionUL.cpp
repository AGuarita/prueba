#include <iostream>
using namespace std;

int main(){
    /*Conversión de Unidades de Longitud
    Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) y realiza la conversión.*/
    int selection;
    float cm, mt, km;
    cout << "Eliga una de las siguientes conversiones"<< endl;
    cout << "1.cm a pulgadas"<< endl;
    cout << "2.Metros a pies"<< endl;
    cout << "3.Km a millas"<< endl;
    cin >> selection;

    switch(selection){
        case 1:
          cout <<"Ingrese la unidad en centimetros" << endl;
          cin >> cm;
          cm*=0.3937008;
          cout <<"La unidad en pulgadas equivale a: "<< cm << endl;
        break;

        case 2:
          cout <<"Ingrese la unidad en metros" << endl;
          cin >> mt;
          mt*=3.28084;
          cout <<"La unidad en pies equivale a: " << mt << endl;
        break;

        case 3:
          cout <<"Ingrese la unidad en kilometros" << endl;
          cin >> km;
          km*= 0.6213712;
          cout <<"La unidad en millas equivale a: "<< km << endl;
        break;
            
        default:
          cout <<"Opcion no valida" << endl;
        break;
    }
    return 0;
}