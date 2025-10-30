#include <iostream>
#include <string>
using namespace std;
int main() {
string texto = "Hola mi nombre";
texto.append(" es fabri");
cout<<"String con append: "<<texto<<endl;	
	
texto.insert(14, " creo que");
cout<<"String con insert: "<<texto<<endl;
	
texto.erase(0, 4); 
cout<<"String con erase: "<<texto<<endl;	

return 0;
}
