//
//  main.cpp
//  getline_consonanti2
//
//  Created by Marco Schiavo on 07/12/23.
//  Si scriva un programma che conti tutte le consonanti presenti in un testo
//  in questo codice considerate che tra le consonanti verranno conteggiate anche i segni di punteggaitura(. , : ecc.)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo;
    cout<<"Inserisci un testo: ";
    getline(cin,testo);
    int consonanti = 0;
    for(int i = 0 ; i< testo.length(); i++){
        if(!(testo[i] == 'a' || testo[i] == 'e' || testo[i] == 'i' || testo[i] == 'o' || testo[i] == 'u' || testo[i] == ' ')) {
            consonanti++;
        }
    }
    cout<<"consonanti: "<<consonanti<<endl;
    return 0;
}
