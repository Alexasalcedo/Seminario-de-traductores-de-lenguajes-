# Seminario-de-traductores-de-lenguajes-2
Nombre:Salcedo Arellano Alexa

Mini Analizador Lexico:
Este pequeño programa analiza una cadena y determina si esta es una simple cadena o si es un entero o flotante.
![image](https://user-images.githubusercontent.com/78230595/168653544-61b11fc5-d383-40ee-9b85-b584259d4fe9.png)![image](https://user-images.githubusercontent.com/78230595/168653671-78532e9e-0b72-4d1f-940f-4e3286c0d5e2.png)


Analizador Léxico / Modulo 1: 
Utilice el código que el profesor previamente compartido como base del analizador léxico, primero lo analice para comprender como funcionaba y que era lo que hacia
y después proseguí a hacer cambios como borrar ciertas funciones que no utilizaba, y que analizara palabra por palabra en lugar de carácter por carácter; 
así mismo agregue más palabras reservadas y finalmente arregle un error que tenía el código original en el cual analizaba basura del sistema es decir no se detenía 
donde terminaba la cadena que el usuario le daba.
![image](https://user-images.githubusercontent.com/78230595/168655029-332ee48a-6368-47c5-baab-3d187734ee6e.png)

Analizador sintactico Modulo 2:
Generar un algoritmo para analizar los Ejercicios 1 y 2 del archivo (PracticaAnalizadorSintactico.pdf)
Este analizador sintactico se basa en una pila de enteros que es la que va guardando el estado y las reglas con forme se va analizando la cadena hasta que llegamos
a un estado de aceptacion 
Entrada para el Ejercicio 1
hola+mundo
![image](https://user-images.githubusercontent.com/78230595/168656339-cc53d343-244c-4fec-a0ad-d2ae172ae46e.png)
Entrada para el Ejercicio 2
a+b+c+d+e+f
![image](https://user-images.githubusercontent.com/78230595/168656480-3d3d6803-f7bc-4ccc-a250-078bfc6be4cc.png)
![image](https://user-images.githubusercontent.com/78230595/168656506-01ab0fcf-8a02-4b2c-a4c2-36d90f912d4d.png)
![image](https://user-images.githubusercontent.com/78230595/168656565-36fac28f-6abf-4177-a0f4-f12afd833139.png)

Analizador sintactico(objetos) / Modulo 3:
En esta práctica utilizaras una pila de objetos en lugar de enteros, de esta forma al
momento que imprimas la pila aparecerán los símbolos de forma similar a cuando realizas
el análisis manualmente.
Ejercicio 2
![image](https://user-images.githubusercontent.com/78230595/168656800-c6f1d617-725e-4876-8a40-7abc17648ba7.png)

Gramatica del compilador / Modulo 4:
Utilizando tu analizador léxico y tu algoritmo para trabajar con las tablas lr. Carga e implementa la gramática.
Ejemplo : int hola ( int y ) { } 
![image](https://user-images.githubusercontent.com/78230595/168657095-4f01efe9-66c4-4edd-afb7-c6c0598b9d86.png)

Arbol Semantico / Modulo 5 :
Generacion de un arbolcon las reglas y los datos que se estan analizando asi como una tabla de simbolos de estaforma lainformacion no se pierde.
Ejemplo Arbol 10
![image](https://user-images.githubusercontent.com/78230595/168657768-c9dd652c-cb5a-457d-a495-5bd23830bcac.png)

Analisis Semantico: el 0 que se observa en la ultima linea es el dato que se paso a memoria para complilar
Se junta la gramatica del compilador con el arbol sintactico asi mismo agregamos jeneracion de codigo
Ejemplo: int x ( int y ) { int j ; j = 7 ; char letra ; return 7 + 8 ; } 
Declaracion de variable 
![image](https://user-images.githubusercontent.com/78230595/168658324-1f285164-cfc8-42cc-92cd-eb18601116c3.png)

Declaracion de variable: la a que se observa en la ultima linea es el dato que se paso a memoria para complilar
![image](https://user-images.githubusercontent.com/78230595/168658426-3a17c257-e138-4c42-9211-a19e0b32ea58.png)

Suma en ensamblador:
![image](https://user-images.githubusercontent.com/78230595/168658619-4cf33d5e-9d28-4620-bcf0-ef30177e75bb.png)

Tabla de simbolos: 
![image](https://user-images.githubusercontent.com/78230595/168658835-3a87f8b3-358c-4607-a840-d201a1a72528.png)

Aceptacion :
![image](https://user-images.githubusercontent.com/78230595/168658791-3d5023fc-0680-47c9-9c55-7df7f8d97c11.png)
