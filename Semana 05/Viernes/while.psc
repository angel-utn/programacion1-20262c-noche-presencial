Algoritmo sin_titulo
	cant = 0; cantNotas = 0
	Leer nota
	Mientras nota!=0 Hacer
		cantNotas = cantNotas+1
		Si nota>=6 Entonces
			cant = cant+1
		FinSi
		Leer nota
	FinMientras
	Escribir cant
	Si cant<=(cantNotas/2) Entonces
		Escribir 'Se debe repasar el tema'
	FinSi
FinAlgoritmo
