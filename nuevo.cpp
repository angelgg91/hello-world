#include <iostream>
//#include <cstdlib>
#include <cstdio>//esta se utiliza para fprintf y stdout

#include <cstdlib>//	se utiliza limpia pantalla: system("clear");



/*
BTW, system() is a standard function. You find it by #including <cstdlib>.
The problems are that it opens security vulnerabilities, and that it is inherently OS-dependant. For example

system("cls");

will only work on Windows. On Unix, you would have to say

system("clear");

and hope it works.

*/
using namespace std;


/**
EJercicio 1
@Angel Garcia
*/

void limpia();

int main(){
	//DECLARACION DE VARIABLES
	const int TAM=100;
	int tam=0;
	int v[tam];
	int i=0;//En c++ dentro del bucle for se puede declarar la variable


	//Peticion del tamaño del vector
	do{
		cout << "Introduce el numero de datos: ";
		cin>>tam;
	}while(tam<=0 || tam>=TAM);


	//Lectura de datos por la entrada estandar
	for(i=0; i<=tam-1; i++){
		cout << "Introduce el v" << '[' << i << ']'<< ": ";
		cin>>v[i];
	}


	//Mostrar por pantalla
	//clrscr();
	system("clear");
	//limpia();
	cout <<"///El \033[31mresultado es///\n\n";
	for(i=0; i<=tam-1; i++){
		cout << "v" << '[' << i << ']'<< ": "<< v[i];
		cout << endl;
	}



return 0;
}


void limpia(void){
	fprintf(stdout, "\033[2J"); // clean screen
	fprintf(stdout, "\033[1;1H"); // move cursor to the first line
	//las dos sentencias anteriores se podria hacer: 
	//cout << "\033[2J\033[1;1H";



	//cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}