//
//  main.cpp
//  getline_numeri3
//
//  Created by Marco Schiavo on 07/12/23.
//  Si scriva un programma che verifichi se ci sono numeri all’interno di un testo
// 48 e 57 sono i valori UTF-8

#include <iostream>
#include <string>

using namespace std;

int main() {
    string testo;
    cout<<"Inserisci un testo: ";
    getline(cin,testo);
    bool flag = 0;
    
    for(int i = 0 ; i< testo.length(); i++){
        if(testo[i] >= 48 && testo[i]<=57) {
            flag = 1;
        }
    }
    
    if(flag){
        cout<<"ci sono numeri"<<endl;
    }else{
        cout<<"Non ci sono numeri"<<endl;
    }
    return 0;
}
