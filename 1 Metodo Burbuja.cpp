	//Metodo Burbuja
	
	#include<iostream>
	#include<conio.h>
	#include <locale.h>  
	
	//variables globales
	int i,j,aux,n=0;
	
	
	//Declaración de funciones
	int ingresarDatos(int,int,int casillero[]);
	int metodoBurbuja(int,int,int,int,int casillero[]);
	int  imprimirArre(int,int,int casillero[]);
			
	using namespace std;
	
	
	int main(){
		
			setlocale (LC_ALL,"");
			
		//Variables globales
		int casillero[n];
		
		cout<<"\t\t\t\t\t******************************\n";
		cout<<"\t\t\t\t\t*        MÉTODO BURBUJA      *\n";
		cout<<"\t\t\t\t\t******************************\n\n\n";
		
		ingresarDatos(i,n,casillero);
		

		getch();	
		return 0;
	}
	
	
	int ingresarDatos(int i,int n,int casillero[]){
			
		cout<<"¿Cuál será el tamaño de tu arreglo?\n";
		cin>>n;
		
		for(i=0;i<n;i++){
			cout<<"Ingresa el número en la casilla "<<i<<endl;
			cin>>casillero[i];
		}
		metodoBurbuja(aux,n,i,j,casillero);
	}
	
	
	int metodoBurbuja(int aux,int n, int i,int j,int casillero[]){
			
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(casillero[j] > casillero[j+1]){
					aux = casillero[j];
					casillero[j] = casillero[j+1];
					casillero[j+1] = aux;
				}
			}
		}
		imprimirArre(i,n,casillero);	
	}
	
	
	int imprimirArre(int i,int n,int casillero[]){
		
		cout<<"Numeros ordenados de forma Ascendente: ";
		for(i=0;i<n;i++){
			cout<<casillero[i]<<" ";
		}
		
		cout<<"\nNumeros ordenados de forma Descendente: ";
		for(i=n;i>n;i--){
			cout<<casillero[i]<<" ";
		}
		
	}
