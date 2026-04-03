/******************************************************************************
D - Vlad and the Beast of five
    cin>>cad;
    
    cout<<cad<<endl;
    
    //ELemento específco de la cadena
    //Es como tener un array de carácteres
    
    //Recorrido de la cadena
    for(auto i:cad){
       cout<<i<<endl; 
    }
    
    for(int i=0; i<cad.size(); i++){
        cout<<cad[i];
    }
    

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main(){
//Contadores y test cases
int cA, cB, t;

//string
string cad;

    cin>>t;
    
    for(int j=0; j<t; j++){
        cA=0;
        cB=0;
        
        cin>>cad;
        
            for(auto i:cad){ //i es un eLemento de cadena
    //Esta sinaxis me va a dar todos los elementos 
    //i pertenece a cad (como en conjuntos)
        
            if(i=='A'){
                cA++;
            }else{
                cB++;
            }
        }
    
        if(cA>cB){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        
        }
    
    }


    return 0;
}
