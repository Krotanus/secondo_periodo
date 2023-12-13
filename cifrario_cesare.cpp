// C++ program to demonstrate
// anomaly of delimitation of
// getline() function
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Si scriva un programma che implementi un cifrario di Cesare, gli spazi non devono essere criptati
    int scelta = 0;
    string testo = "";
    int key = 0;
    int flag = 1;
    char x;
    string deter = "critpato";
    
    cout<<"*************************"<<endl;
    cout<<"**** C I F R A R I O ****"<<endl;
    cout<<"*** D I   C E S A R E ***"<<endl;
    cout<<"*************************"<<endl;
    
    for(int i = 0 ; i < flag; ){
        cout<<"Cosa vorresti fare?"<<endl;
        cout<<"Inserisci 1 per criptare 2 per decriptare: ";
        cin>>scelta;
        if(!(scelta == 1 || scelta == 2)){
            scelta = 3;
            i = 0;
            cout<<"Puoi inserire solo i valori 1 oppure 2! riprova"<<endl;
            
        }else{
            switch(scelta){
                case 1 : {
                    cout<<"Inserisci il testo: "<<endl;
                    getline(cin>>ws,testo);
                    int j = 1;
                    for(int k = 0 ; k < j; ){
                        cout<<"Inserisci la chiave: "<<endl;
                        cin>>key;
                        if(!(key>0 && key<=26)){
                            cout<<"la chiave deve essere compresa tra 1 e 26, riprova"<<endl;
                            k = 0;
                        }else{
                            k++;
                        }
                    }//end for
                    for(int i=0 ; i<testo.length() ; i++){
                        x = testo[i];
                        if (x != ' ') {
                            testo[i] = 'a' + (x - 'a' + key) % 26;
                        }
                    }
                    i++;
                }break;
                case 2 : {
                    deter = "decriptato";
                    cout<<"Inserisci il testo: "<<endl;
                    getline(cin>>ws,testo);
                    cout<<"Inserisci la chiave: "<<endl;
                    cin>>key;
                    for(int i=0 ; i<testo.length() ; i++){
                        x = testo[i];
                        if (x != ' ') {
                            testo[i] = 'a' + (x - 'a' - key + 26) % 26;
                        }
                    }//end for
                    i++;
                }break;
                    
                default: {
                    cout<<"scelta non valida, riprova."<<endl;
                    cout<<"********************************"<<endl;
                }
            }//end switch
        }
        
        
    }//end for layer 1
    
    
    cout<<"Il mio testo "<< deter <<" è: "<<testo<<endl;
    return 0;
}

