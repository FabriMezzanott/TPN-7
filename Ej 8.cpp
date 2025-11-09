#include <iostream>
#include <string>
using namespace std;
int main() {
	
string cad1 = "Hola Fabri";
string cad2 = "Ejemplo";
string cad3 = "La Pampa";
cout<<"Strings iniciales:"<<endl;
cout<<"cad1: "<<cad1<<endl;
cout<<"cad2: "<<cad2<<endl;
cout<<"cad3: "<<cad3<<endl;
cout<<endl;
//funcion 1 erase
cout<<"erase() en cad1 (erase(5, 5)):" << endl;
cad1.erase(5, 5);
cout<<"Resultado: "<<cad1<< endl;
cout<<endl;
//funcion 2 empty
cout<<"empty() en cad2:"<<endl;
if(cad2.empty()){
cout<<"Resultado: Verdadero (esta vacia)"<<endl;
} else {
cout<<"Resultado: Falso (no esta vacia)"<<endl;
}
cout<<endl;
//funcion 3 
cout<<"resize() en cad3 (5):"<<endl;
cad3.resize(5);
cout<<"Resultado: "<<cad3<<endl;
cout<<endl;
}
