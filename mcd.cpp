//
//  main.cpp
//  MCD
//
//  Created by Marco Schiavo on 12/12/23.
//

#include <iostream>

using namespace std;

int main() {
    int num1 = 0 ;
    int num2 = 0 ;
    cout<<"Calcolo del Massimo Comun Divisore tra 2 numeri interi"<<endl;
    cout<<"Inserisci il primo numero: ";
    cin>>num1;
    cout<<"Inserisci il secondo numero: ";
    cin>>num2;
    int max = 0;
    (num1>num2)? max = num1 : max = num2;
    max = max / 2;
    int mcd = 0;
    
    for(int i = 1 ; i < max ; i++){
        if(!(num1 == num2)){
            if( (num1 % i == 0) && (num2 % i == 0) ){
                mcd = i;
            }
        }else{
            mcd = num1;
        }

    }
    
    cout<<"Il Massimo Comun Divisore tra "<<num1<<" e "<<num2<<" è: "<<mcd<<endl;
    
    
    return 0;
}
