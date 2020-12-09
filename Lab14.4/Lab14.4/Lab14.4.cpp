﻿// Lab14.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian"); //установка русского языка
	int s,k;
	double p;//ввод переменных
	printf("Введите P: "); //ввод значения с клавиатуры
	scanf_s("%lf", &p);
	if ((0 < p) && (p < 25)) //ввод условия
	{
		s = 1000; //начальные значения
		k = 0;
		while (s <= 1100) //ввод цикла
		{
			s = s * (p / 100 + 1); //находим размер вклада за месяц 
			k++; //увеличиваем число месяца на 1
		}
		printf("Количество месяцев: %d\nИтоговый размер вклада: %d\n", k, s); //вывод результата на экран
	}
	else
		printf("Процентное число долно быть больше 0, но меньше 25\n"); //подсказка
	return(0);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.