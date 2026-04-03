/******************************************************************************

E - Odd One Out
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
int t, a, b, c;

    cin>>t;
    
    while(t--){
        cin>>a;
        cin>>b;
        cin>>c;
        
        if(a==b){//
           cout<<c<<endl; 
        }else if(b==c){
        cout<<a<<endl; 
        }else if(a==c){
        cout<<b<<endl; 
        }
        
    }
    
    return 0;
}
