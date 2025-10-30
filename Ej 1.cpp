#include <iostream>
#include <string>
using namespace std;
int main (){
string texto, reversa;
cout<<"Digite una cadena de texto: ";
getline(cin, texto);
for (int i = texto.length(); i>=0; i--){
reversa = reversa + texto[i];
}	
cout<<"Cadena invertida: "<<reversa;
	

return 0;
}
