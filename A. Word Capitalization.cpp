/******************************************************************************
A. Word Capitalization
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int f;
    char a;
    
    cin>>s;
    
    f=s.front();
    
    // 97<= minúscula <=122
    if(97<=f && f<=122){
        //a=s.front();
        a=toupper(s.front());
        s.replace(s.front(), 1, a );
        cout<<s<<endl;
    }else{
        cout<<s<<endl;
    }
    
    //find()
    return 0;
}
