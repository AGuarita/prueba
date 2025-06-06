#include <iostream>
using namespace std;

main (){
    int x=0;
    int y=0;
    int numeros[5];
    cout <<"Ingrese los numeros:"<< endl;

    for (int i=0; i<5; i++){
        cout <<"Numero "<< i+1<< ". "<< endl;
        cin >> numeros[i];
        if (numeros[i]%2==0){
        x++;
        }else{
        y++;
        }
    }
    cout <<"La cantidad de numeros pares es de: "<< x<< endl;
    cout <<"La cantidad de numeros impares es de: "<< y<< endl;

    return 0;
}