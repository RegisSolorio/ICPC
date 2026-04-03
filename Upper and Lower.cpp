//Programa que transforma minúsculas a mayúsculas
#include <iostream>
using namespace std;

int main()
{
   char X;
   cout<<"Enter a character:"; 
   cin>>X;
   
   X=X-32;
   //Si le sumas 32 te transforma de mayúscula a minúscula
   
   cout<<"Converted character to UPPERCASE:";
   cout<<X;
   return 0;
}
