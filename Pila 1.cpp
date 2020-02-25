#include <iostream>
#include <conio.h>
#include <stdlib.h> //utilizar para new
using namespace std;
struct nodo{
	int dato;
	nodo *siguiente;
};

void agregarPila(nodo *&pila, int n);
void sacarPila(nodo *&pila, int n);

main(){
	nodo *pila= NULL;
	int dato,opc;
	char res;
	do{
	cout<<"1)Insertar Datos"<<endl;
	cout<<"2)Eliminar Datos"<<endl;
	cout<<"Seleccioneuna opcion"<<endl;
	cin >>opc;
	switch(opc){
		case 1:
			do{
			cout<<"Teclee un elemento"<<endl;
			cin>>dato;
			agregarPila(pila,dato);	
			cout<<"¿Desea otro elemento? s/n"<<endl;
			cin>>res;
			} while(res!='n');
		break;
		case 2:
			cout<<"Sacar elementos de la Pila"<<endl;
			while(pila!=NULL){
			sacarPila(pila,dato);
			 if (pila!=NULL){
			 	cout<<dato<<", ";
			 }
			 else{
			 	cout<<dato<<"."<<endl;
			 }
			}
		break;
		default:
			cout<<"Opcion incorrecta"<<endl;
	}	
	cout<<"¿Desea realizar otra operaciones? s/n";
	cin>>res;
}while(res!='n');
}

void agregarPila(nodo *&pila, int n){
 nodo *nvo_nodo = new nodo();
 nvo_nodo -> dato= n;
 nvo_nodo -> siguiente =pila;
 pila=nvo_nodo;
 cout<<"\nEl elemento "<<n<<" ha sido agregado correctamente "<<endl;
}

void sacarPila(nodo *&pila, int n){
	nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

