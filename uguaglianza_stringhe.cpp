//
//  main.cpp
//  getline_uguaglianza7
//
//  Created by Marco Schiavo on 07/12/23.
//  Scrivere un programma che date due stringhe di lunghezza M restituisca 1 se sono uguali altrimenti 0

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string stringa1;
    string stringa2;
    bool flag = false;
    
    cout<<"Inserisci la prima stringa: "<<endl;
    getline(cin,stringa1);
    cout<<"Inserisci la seconda stringa: "<<endl;
    getline(cin,stringa2);
    string response1 = "i due testi non sono uguali";
    string response2 = "i due testi sono uguali";
    
    if(stringa1.length() != stringa2.length()){
        cout<<response1;
    }else{
        for(int i = 0 ; i < stringa1.length() ; i++){
            if(stringa1[i] != stringa2[i]){
                flag = true;
            }
        }
    }
    
    if(flag){
        cout<<response1<<endl;
    }else{
        cout<<response2<<endl;
    }
    return 0;
}
