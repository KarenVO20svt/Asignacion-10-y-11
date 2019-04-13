Proceso Ejercicio3
	Definir peso, altura como real
	Escribir "Escriba el peso en kilogramos:"
	Leer peso
	Escribir "Escriba la altura en metros:"
	Leer altura
	IMC <- peso / ( altura ^ 2)
	Escribir "Su IMC es de:" IMC
	
	Si  IMC < 15 Entonces
		Escribir  "Criterio de ingreso en hospital"
	sino 
		Si IMC >= 15 Y IMC <= 20 Entonces
			Escribir  "Usted tiene bajo peso"
			Sino
				Si  IMC > 20 Y IMC <= 30 Entonces
					Escribir  "Usted tiene el peso normal (saludable)"
				sino 
					si  IMC > 30 Y IMC <= 40 Entonces
						Escribir  "Usted tiene sobrepeso (obesidad de grado I)"
						Sino
							si  IMC > 40 entonces
								Escribir  "Usted tiene sobrepeso crónico (obesidad de grado II)"
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
FinProceso