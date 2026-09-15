Algoritmo sin_titulo
	cant = 0
	Para I<-1 Hasta 25 Con Paso 1 Hacer
		Leer nota
		Si nota>=6 Entonces
			cant = cant+1
		FinSi
	FinPara
	Escribir cant
	Si cant<=25/2 Entonces
		Escribir 'Se debe repasar el tema'
	FinSi
FinAlgoritmo
