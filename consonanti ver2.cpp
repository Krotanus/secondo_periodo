//
//  main.cpp
//  getline_consonanti2
//
//  Created by Marco Schiavo on 07/12/23.
//  Si scriva un programma che conti tutte le consonanti presenti in un testo
//  quest'altra versione considera tutti i casi presenti in una tabella UTF-8

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo;
    cout<<"Inserisci un testo: ";
    getline(cin,testo);
    int consonanti = 0;
    for(int i = 0 ; i< testo.length(); i++){
        if(!(testo[i] == 97 || testo[i] == 101 || testo[i] == 105 || testo[i] == 111 || testo[i] == 117 || testo[i] == ' ' || (testo[i] >= 0 && testo[i] <= 64) || testo[i]  == 65 || testo[i] == 69 || testo[i] == 69 || testo[i] == 73 || testo[i] == 79 || testo[i] == 85 || (testo[i] >= 91 && testo[i] <= 96) || (testo[i] >= 123 && testo[i] <= 255 ))) {
            consonanti++;
        }
    }
    cout<<"consonanti: "<<consonanti<<endl;
    return 0;
}
