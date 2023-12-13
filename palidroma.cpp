//
//  main.cpp
//  getline_palindroma8
//
//  Created by Marco Schiavo on 07/12/23.
//  Si scriva un programma che controlli se una stringa richiesta all’utente è palindroma. Una stringa si definisce palindroma se si legge nello stesso modo da sinistra verso destra e da destra verso sinistra. Esempio ANNA, radar

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string parola;
    string palindromo;
    
    cout<<"Inserisci una parola: ";
    cin>>parola;
    for(int i = (parola.length() - 1) ; i >= 0 ; i--){
        palindromo+=parola[i];
    }
    if (parola == palindromo) {
        cout<<"la parola e' un palindromo"<<endl;
    }else{
        cout<<"la parola non e' un palindromo"<<endl;
    }
    return 0;
}
