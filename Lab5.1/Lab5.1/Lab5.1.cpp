﻿// Lab5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int x1, x2, y1, y2, r, r1; //ввод переменных
    double d;
    printf("Введите 4 координаты:");
    scanf_s("%d%d%d%d", &x1, &y1, &x2, &y2); //ввод с клавиатуры координат
    r = x2 - x1; //нахождение разности между координатами
    r1 = y2 - y1;
    d = sqrt(pow(r, 2) + pow(r1, 2)); //подсчет 
    printf("Расстояние между двумя точками будет =%lf\n", d);//вывод результата на экран
    system("pause");
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
