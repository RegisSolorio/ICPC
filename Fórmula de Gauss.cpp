#include<iostream>

using namespace std;


int main(){
/*Usaremos la fórmula de Gauss para convertir el problema en O(1)
	n(n+1)/2

 */
 
 int n, g, y=0, i;
 
 cin>>n;
 
 g = (n*(n+1))/2;
 
 //((n-1)*n/2;
 
    for(int x=0, i=0; i<n; i++){
    
    	cin>>x;
    	y+=x;
    }
    
    cout<<g-y;
	
    return 0;

}
