#include<stdio.h>
/*
	Otro uso de la directiva include.
*/
int main(){
	
	//Usamos "" cuando est�n en la misma carpeta.
	#include "info.c"
	
	//Usamos <> cuando est�n en diferentes carpetas.
	#include <C:\Users\Erick\Documents\Curso C-C++\codes\info.c>
	
	return 0;
}


