#include <iostream>

using namespace std;

int main(){
	bool bandera = true;
	for(int i = 0; i < 11; i++){
		cout << "Bandera #" << i << " = ";
		cout << ((bandera =! bandera) ? "Verdadero":"Falso")<< endl;
	}
}
