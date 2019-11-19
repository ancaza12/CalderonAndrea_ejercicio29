#include <fstream>
#include <iostream>
#include<stdio.h> 
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;

const double k=0.7;
const double D=1; //Constante de difusion
const int Nx = 30; //numero de pasos
const double phi1, phi2=0;
const double dx= 0.01; 
//Condiciones:
double xi = -1.0;
double xf = 1.0;
double phi0 = 0.0;
double ti = 0.0;

double s0=1;
int dx= (xf-xi)/Nx;

void eq(string nombre);
	
int main() 
{ 
	string nombre = "ej29.dat";
 	eq(nombre);
	return 0; 
} 


void eq (string nombre){
	ofstream file;
	outfile.open(nombre);
	float datosp[Nx][Nx];
	float datosn[Nx][Nx];
	s=s0;
	phi = phi0;
	for (int n = 0; n < Nx; n++){
		for (int j= 0; j< Nx; j++){
			float dphi = D*(-4* pow(sin(k*dx/2),2))*phi + s;
			
			datosp[n][j]= dphi
			outfile << n <<" "<< j<< " " << datosp[n][j] << std::endl;
		}
	}
	outfile.close();
}
