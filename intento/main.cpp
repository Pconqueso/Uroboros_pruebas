#include <iostream>
#include "sha256.h"
#include "sha512.h"
#include "inicio.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
inicio ft;

int main(int argc, char** argv) {

	int opc;
	string a;
	cout<<"1) hash256"<<endl;
	cout<<"2) hash512"<<endl;
	cin>>opc;
	switch (opc)
	{
		case 1 :
			{
				cout<<"Ingrese palabra"<<endl;
				cin>>a;
				string input = a;
			    string output1 = sha256(input);
			    cout << "sha256('"<< input << "'):" << output1 << endl;
			}
		break;
		case 2 :
			{
				cout<<"Ingrese palabra"<<endl;
				cin>>a;
				string input = a;
			    string output1 = sha512(input);
				cout << "sha512('"<< input << "'):" << output1 << endl;	
			}
		break;
		default : 
				cout<<"Ingrese una opcion valida"<<endl;
	}
	return 0;
	
}
