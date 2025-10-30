#include <iostream>
#include <string>
using namespace std;
int main (){
string text,espacio;
int goku;
char k;
cout<<"Digite un texto: ";
getline(cin, text);
goku = text.size();
for(int i=0; i<goku ; i++){
k = text.at(i);
if (k != ' '){
cout<<k;
}
}

return 0;
}
