#include <iostream>
#include <string>
using namespace std;
int main (){
string cad1;
cout<<"Digite una cadena: ";
getline(cin, cad1);

char primero = cad1[0];
char ultimo = cad1[cad1.size()-1];

cout<<"Primer caracter: "<<primero<<endl;
cout<<"Ultimo caracter: "<<ultimo<<endl;

return 0;
}
