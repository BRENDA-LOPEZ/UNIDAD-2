#define tope 2023
#define meses 12
#define dias 24
#define horas 60
#define minutos 60
#define segundos 60
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string> 
#include<stdio.h> 
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"luis", "ricardo", "raul"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main(){
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
       
	    	int numero;
        		cout<<"Menu de Rutinas"<<endl; 
				cout<<"Escribe un Numero"<<endl;
			cout<<"1- Rutina 1"<<endl;
			cout<<"2- Rutina 2"<<endl;
			cout<<"3- Rutina 3"<<endl;
			cout<<"4- Rutina 4"<<endl;
			cout<<"5- Rutina 5"<<endl;
			cout<<"6- Rutina 6"<<endl;
			cout<<"7- Rutina 7"<<endl;
			cout<<"8- Rutina 8"<<endl;
			cout<<"9- Rutina 9"<<endl;
			cout<<"10- Rutina 10"<<endl;
			cout<<"11- Rutina 11"<<endl;
			cout<<"12- Rutina 12"<<endl;
			cout<<"13- Rutina 13"<<endl;
			cout<<"14- Rutina 14"<<endl;
			cout<<"15- Rutina 15"<<endl;
			cin>>numero;
			
			switch(numero)
			 {
			 	case 1:{
			 		
			 		cout<<"Hola mundo"<<endl;
					break;
				  }
				   case 2:{
				  	int a,b,c,d,e,suma,promedio;
         		  	{
						  	int h = 0, m = 0, s = 0;
							while(1){
							if(s<=60){
							s = 0;
							m++;
							if(m>=60){
							m = 0;
							h++;
							 }
							 }
						     system("cls");
							cout<<h<<":"<<m<<":"<<s;
							Sleep(1000);
							 s++;
							  }
							 cin.get();
						}
							 break;
					      case 3:{
					      		{
						  	char letra1;
						  	cout<<"Ingresa una letra";
						  	cin>>letra1;
						  	if(letra1 =='a'){
						  	cout<<"es vocal";
							  }
							  if(letra1 == 'e'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'i'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'o'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'u'){
							  	 cout<<"es vocal";
							  }
							 else {
							 	cout<<"es consonante";
							 }
							 
							  }
							break;
						  }
						  case 4:{
						  	  {
							printf(" Escuela Conalep Nucalpan 1");
							printf(" Modulo Programacion basica");
							printf(" Maestro Jose Luis Chavez Gomez");
							printf(" Carrera tecnico en bachiller en informatica");
							printf(" Grupo 305");
							printf(" Tercer semestre de bachillerato");
							printf(" Edad 16 aÃ±os");
							
							return 0;
							
							}
							break;
						  }
						  case 5:{
						  		{
						  	int i;
						  	for(i=1;i<100;i++){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							}break;
						  }
						  case 6:{
						  {
						  	int num1,num2,num3;
						  	cout<<"Digita tu primer numero"<<endl;
						  	cin>>num1;
						  	cout<<"Digita tu segundo numero"<<endl;
						  	cin>>num2;
						  	cout<<"Digita tu tercer numero"<<endl;
						  	cin>>num3;
						  	
						  	if(num1==num2 and num2==num3){
						  	cout<<"Tu triangulo equilatero";
							  }
							else if(num1==num2 and num2==num3){
							cout<<"Tu triangulo es isoseles";
							}
							else if(num1 != num2 and num2 != num3){
							cout<<"Tu triangulo es escaleno";
							}
							else{
								cout<<"No es ningun triangulo";
							}
							return 0;
						}
							break;
						  }
						  case 7:{
						 	{
						  	 int pro;
						  	 cout<<"Digita el numero del 1 al 7";
						  	 cin>> pro;
						  	 switch(pro){
						  	  case 1:
		                     cout<<"Hoy es lunes";break;
		                     case 2:
	                      	cout<<"Hoy es martes";break;
	                     	case 3:
		                     cout<<"Hoy es miercoles";break;
	                      	case 4:
	                     	cout<<"Hoy es jueves";break;
	                     	case 5:
	                     	cout<<"Hoy es viernes";break;
		                     case 6:
		                     cout<<"Hoy es sabado";break;
	                      	case 7:
		                     cout<<"Hoy es domingo";break;
		                     default: cout<<"No es un dia de la semana";break;
							   }
							   return 0;
							  }
							break;
							case 8:  {
											  	{
						  	int h = 0, m = 0, s = 0;
							while(1){
							if(s<=60){
							s = 0;
							m++;
							if(m>=60){
							m = 0;
							h++;
							 }
							 }
						     system("cls");
							cout<<h<<":"<<m<<":"<<s;
							Sleep(1000);
							 s++;
							  }
							 cin.get();
							  }
							break;
						  }
						  case 9:{
						   {
						 int i;
						for(i=1;i<=100;i+=2){
						  	cout<<i<<endl;
								  }
								  return 0;
							  }
							break;
						  }
						  case 10:{
	  {
						  	int e;
						  	for(e=100;e>0;e--){
						  		cout<<e<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						   case 11:{
				         	{
						    int i;
						    int num;
						  	int multiplicacion;
						     cout<<"Por favor ingresa el numero de la tabla a imprimir:"<<endl;
						  	 cin>> num;
						  	 for(i=1;i<=50;i++){
						  	multiplicacion= num*i;
						  	cout<<num<<"x"<<i<<"="<<multiplicacion<<endl;
							   }
							return 0;
							  }
							break;
						  }
						  case 12:{
						  int i;
						for(i=1;i<=100;i+=2){
						  	cout<<i<<endl;
								  }
								  return 0;
							  }
							break;
							case 13:{
									int miarreglo[5];
	string nombres[3];
	miarreglo[0] = 10;
	miarreglo[1] = 20;
	miarreglo[2] = 30;
	miarreglo[3] = 40;
	miarreglo[4] = 50;
	
	//nombres
	
	nombres[0] = "zabdi";
	nombres[1] = "brenda";
	nombres[2] = "kevin";
	for(int b=0; b<=3; b++){
		cout<<"mis elementos:"<<b<<":"<<miarreglo[b]<<endl;
		
	}
	for(int p=0; p<=1; p++){
		cout<<"mis nombres de arreglo son:"<<nombres[p]<<endl;
	}
} 
								break;
								case 14:{
										const int tamarreglo = 5;
	int numero[tamarreglo];
	
	for(int a=0; a<tamarreglo; a++){
		cout<<"ingrese numero"<<a+1<<":";
		cin>>numero[a];
	}
	
	cout<<"los numeros ingresados son:";
	for (int a=0; a<=tamarreglo; a++){
		cout<<numero[a]<<"";
	}
	cout<<endl;
	return 0;
}
									break;
									case 15:{
											const int numAlumnos = 6;
	int asistencia [numAlumnos];
	
	for(int b =0; b<numAlumnos; b++){
		asistencia[b]=0;
	}
cout<<"Bienvenido al sistema de asistecia: "<<endl;
cout<<"Registra la asistencia de los alumnos: "<<endl;
cout<<"Registra el nombre de los alumnos e indica si asistio: "<<endl;
for(int b =0; b<<numAlumnos; b++){
	string nombre;
	char asistio;
	cout<<"Alumno:"<<b+1<<":";
	cin>>nombre;
	cout<<"¿Si asistio? (s/n)";
	cin>>asistio;
	
	if(asistio == '6' || asistio == '6'){
		 asistencia[b]=1;
	}
	int faltas = 0;
	for(int b =0; b<numAlumnos; b++){
		if(asistencia [b] == 0){
			faltas++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	return 0;
	}
	
}
									}
								}
							}
						  
	else{
		}
		cout<<"Por favor digita bien la contraseña";
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    return 0;
}
