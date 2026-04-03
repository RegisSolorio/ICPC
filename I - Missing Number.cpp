/******************************************************************************
I - Missing Number
*******************************************************************************/

#include <iostream>

using namespace std;

int main(){

int i, k=0, n, j;

    cin>>n;
    
    
    for(i=1; i<n; i++){
        cin>>j;
        k+=j;
        //cout<<":>"<<endl;
    }
    
    n=(n*(n+1))/2;
    j = n-k;
    
    cout<<j<<endl;

    return 0;
}
