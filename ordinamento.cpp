//
//  main.cpp
//  ordinamento
//
//  Created by Marco Schiavo on 30/11/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, c,temp;
    
    /*cout<<"inserisci il primo numero: "<<endl;
    cin>>a;
    cout<<"inserisci il secondo numero: "<<endl;
    cin>>b;
    cout<<"inserisci il terzo numero: "<<endl;
    cin>>c;
    if(a>b && a>c){
        if(b>c){
            cout<<c<<b<<a<<endl;
        }else{
            cout<<b<<c<<a<<endl;
        }
    }else if(b>a && b>c){
        if(a>c){
            cout<<c<<a<<b<<endl;
        }else{
            cout<<a<<c<<b<<endl;
        }
        
    }else{
        if(a>b){
            cout<<b<<a<<c<<endl;
        }else{
            cout<<a<<b<<c<<endl;
        }
    };
    
    int temp = 0;
    //a minimo
    //c max
    
    if(a>b && a>c){
        temp = c;
        c = a;
        if(b>temp){
            a = temp;
        }else{
            a = b;
            b = temp;
        }
    }else if(b>a && b>c){
        temp = c;
        c = b;
        if(b>temp){
            a = temp;
        }else{
            a = b;
            b = temp;
        }
        
    }else{
        if(b<a){
            temp = a;
            a = b;
            b = temp;
        }
    }
    
    
    
    cout<<a<<b<<c;*/
    
    cout<<"inserisci 3 numeri a caso! ci penserÚ io a metterli in ordine crescente!\n\n"<<endl;
        
        cout<<"mum1"<<endl;
        cin>>a;
        
        cout<<"num2"<<endl;
        cin>>b;
        
        cout<<"num3"<<endl;
        cin>>c;
         
         
    if(b<a){
        temp=a;
        a=b;
        b=temp;
    }
    if(c<a){
        temp=a;
        a=c;
        c=temp;
    }
    if(c<b){
        temp=b;
        b=c;
        c=temp;
    }
      cout<<"la sequenza esata Ë:"<<endl;

      cout<<a<< "," <<b<< ","<<c<<endl;
    
    

    return 0;
}
