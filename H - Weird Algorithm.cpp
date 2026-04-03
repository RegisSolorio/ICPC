/******************************************************************************
H - Weird Algorithm
*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    long long n;
    
    
    cin>>n;
    while(true){
        
        cout<<n<<" ";
        
        if(n==1){
            //Si n=1, terminar el ciclo
          break;  
        }else if((n%2)==0){
            //Par 
            n=n/2;
            
        }else{
            //Impar 
            n=(n*3)+1;
        }
        
        
    }

    cout<<endl;
    return 0;
}
