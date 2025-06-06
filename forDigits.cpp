#include <iostream>
using namespace std;

int main(){
 int numero, suma=0, digito=0;
 cout<<"Ingrese un numero"<< endl;
 cin >> numero;
 for (int i=0;i<3;i++){
    
    digito = numero % 10;i
    suma += digito;
    numero /= 10;
    
 }   
 
 cout <<"El resultado de la suma de los digitos es: "<< suma << endl;
}