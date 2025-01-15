#include <iostream>
using namespace std;

Simulated-Annealing(){
	Создаем первоначальное решение S 
	Инициализируем температуру t 
	repeat
		for i = 1 to iteration-length do
			Генерируем произвольный переход из S в Si 
			If (C(S) > C(Si)) then S = St
			else if (e^((C(S)-C(St))/(k*t))> random[0,i]) then S = Si
		Понижаем температуру t 
	until (больше нет изменений в С(S)) 
	Return S
}