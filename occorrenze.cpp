//
//  main.cpp
//  getline_occorrenze6
//
//  Created by Marco Schiavo on 07/12/23.
//  Scrivere un programma che richieda all’utente un carattere ed una stringa e calcoli quindi il numero di occorrenze del carattere nella stringa

#include <iostream>
#include <string>

using namespace std;

int main() {
    char x;
    string testo;
    int count = 0;
    cout<<"inserisci un carattere da cercare: ";
    cin>>x;
    cout<<"inserisci il testo in cui cercare il carattere: ";
    getline(cin>>ws,testo);
    for(int i = 0 ; i < testo.length(); i++){
        if(testo[i] == x){
            count++;
        }
    }
    
    cout << "Nel testo ci sono "<<count<<" lettere "<< x <<endl;
    return 0;
}
