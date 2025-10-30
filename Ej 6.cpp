#include <iostream>
#include <string>
using namespace std;

int main(){
string cad1, cad2;
cout<<"Digite la primera cadena: ";
getline(cin, cad1);
    
cout<<"Digite la segunda cadena: ";
getline(cin, cad2);

if(cad1>cad2){
cout<<"La cadena mayor alfabeticamente es: "<<cad1<<endl;
} else if (cad2>cad1) {
cout<<"La cadena mayor alfabeticamente es: "<<cad2<<endl;
} else if (cad1==cad2) {
cout<<"Las cadenas son iguales" << endl;
}
    
return 0;
}
