/*Autor: Oscar Eduardo Fletes Ixta, realizado: 13/02/2022
	Programa que calcula e imprime, los modelos de menor precio por pie cuardrado
	
	Programa en lenguaje c que calcula el porecio sobre el pie cuardrado de tres modelos de casas, 
	y ayudamos a elegir la mejor opcion, con uso de scanf, condicones y operaciones aritméticas 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float
		* Uso de scanf
		* Uso de condiciones
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, uso del scanf, uso de cindicones, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo float (precio, area), 3 veces,
	El programa pide datos para calcular e imprime, los modelos de menor precio por pie cuardrado, y ayudamos a que eleiga la mejor opcion 
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main (){
	//Variables
	float precio,precio2,precio3, area, area2,area3, modelo1,modelo2,modelo3,menor;//Variables con decimal
	//Entrada 
	printf("Por favor introduce el precio base del modelo colonial: ");//imprime mensaje
	scanf("%f",&precio);//lee el numero insertado por el teclado
	printf("Por favor introduce el area en pies cuadrados: ");//imprime mensaje
	scanf("%f",&area);//lee el numero insertado por el teclado
	modelo1=precio/area;//Calcula precio sobre area
	printf("El precio por pies cuadrados es: $%.2f\t\n\n", modelo1);//imprime la salida del modelo 1
	
	printf("Por favor introduce el precio base del modelo Entrada dividida: ");//imprime mensaje
	scanf("%f",&precio2);//lee el numero insertado por el teclado
	printf("Por favor introduce el area en pies cuadrados: ");//imprime mensaje
	scanf("%f",&area2);//lee el numero insertado por el teclado
	modelo2=precio2/area2;//calcula el precio sobre area
	printf("El precio por pies cuadrados es: $%.2f\t\n\n", modelo2);//imprime la salida del modelo 2
	
	printf("Por favor introduce el precio base del modelo de una sola planta: ");//imprime mensaje
	scanf("%f",&precio3);//lee el numero insertado por el teclado
	printf("Por favor introduce el area en pies cuadrados: ");//imprime mensaje
	scanf("%f",&area3);//lee el numero insertado por el teclado
	modelo3=precio3/area3;//calcula el precio sobre area 
	printf("El precio por pies cuadrados es: $%.2f\t\n\n", modelo3);//imprime la saldia del modelo 3
	//Proceso 
	menor=modelo1;//usamos la variable menos y se la asignamos al modelo 1
	if(modelo2<menor){//condicion, si modelo 2 es menor que el modelo 1
		menor=modelo2;//el menor sera el mnodelo 2
	}
		if(modelo3<menor){//condicion, si modelo 3 es menor
			menor=modelo3;//el menor sera el mnodelo 3
	}
	//Salida
	printf("Modelo o modelos de menor precio por pie cuadrado \n");//imprime mensaje
	if(modelo1==menor){//condicion, si modelo 1 es igual a menor
		printf("El mejor modelo es el Colonial");//imprime mensaje
	}
	if(modelo2==menor){//condicion, si modelo 2 es igual a menor
		printf("El mejor modelo es el de estrada divida");//imprime mensaje
	}
	if(modelo3==menor){//condicion, si modelo 2 es igual a menor
		printf("El mejor modelo es el de una sola planta");//imprime mensaje
	}
	
	return 0; 
}


//precio/metro
