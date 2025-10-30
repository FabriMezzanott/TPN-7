#include <iostream>
#include <string>
using namespace std;
int main (){
string pala;
cout<<"Digite una palabra: "; cin>>pala;
int max=pala.size();
for(int i=0; i<max ; i++){
char esp=pala.at(i);
cout<<esp<<"-";

}
}
	
	
	
	
	
return 0;
}
