#include <iostream>
using namespace std;

int main(){
    int luz;
    cout <<"Ingrese la energia ocupada en KWh"<< endl;
    cin >> luz;

    if (luz <= 100){
        cout <<"Tarifa baja:"<< luz*0.19<<endl;
    } else if (luz>100 and luz<200){
        cout <<"Tarifa media:"<< luz*0.19<< endl;
    }else if (luz>=200) {
        cout <<"Tarifa alta:"<<luz *0.19<< endl;
    }

    return 0;
}