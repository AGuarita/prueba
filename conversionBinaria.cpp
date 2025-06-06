#include <iostream>
using namespace std;

int main(){
    
    int numBs, numBi[10], i=0;

    cout <<"Ingrese un numero"<< endl;
    cin >> numBs;

    do {
        numBi[i]= (numBs % 2);
        numBs= (numBs / 2);
        i++;
    }while(numBs>1);

     cout << "El numero en binario es "<< endl;
     cout << numBs << endl;

    for (int j= i-1; j>=0; j--){
      cout<< numBi[j]<< endl; 
    }

    return 0;
}
