//
//  main.cpp
//  fattoriale
//
//  Created by Marco Schiavo on 29/11/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0 ;
    int fatt = 0;
    cout << "Quale numero vuoi avere il fattoriale? ";
    cin >> n;
    for(int i = 0 ; i <= n ;  i++){
        (i==0)? fatt = 1 : fatt = fatt * i;
        cout<<"il fattoriale di "<<i<<" = "<<fatt<<endl;
    }
    return 0;
}
