#include <program1.h>

procedimiento llenarMatriz(matrizDin2D(real) v1,entero filas, entero columnas){
	entero i,j;
	variarMas1(i,0,filas-1)
		variarMas1(j,0,columnas-1)
			real dato;
			leer(dato);
			v1[i][j] = dato;
		finVariar
	finVariar
}
funcion cadena posiciones(matrizDin2D(real) v1,entero filas,entero columnas,real num){
	cadena resultado = "";
	entero i,j;
	variarMas1(i,0,filas-1)
		variarMas1(j,0,columnas-1)
			si (v1[i][j] == num) entonces
				resultado+=(aCadena(i+1)+aCadena(j+1));
			finSi
		finVariar
	finVariar
	si (resultado ES "") entonces
		resultado = "0";
	finSi
	regresa (resultado);
}

principal
entero nFilas,nColumnas;
real nABuscar;
leer(nFilas);
leer(nColumnas);
leer(nABuscar);
matrizDin2D(real) matriz;
llenarMatriz(matriz,nFilas,nColumnas);
cadena resul = posiciones(matriz,nFilas,nColumnas,nABuscar);

mostrar << resul << salto;
finPrincipal
