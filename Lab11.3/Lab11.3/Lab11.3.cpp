﻿// Lab11.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int x1, y1, x2, y2, x3, y3;//ввод переменных
    double ab, ac;
    printf("Введите координаты точки A: ");//ввод с клавиатуры значения
    scanf_s("%d", &x1);
    scanf_s("%d", &y1);
    printf("Введите координаты точки B: ");//ввод с клавиатуры значения
    scanf_s("%d", &x2);
    scanf_s("%d", &y2);
    printf("Введите координаты точки C: ");//ввод с клавиатуры значения
    scanf_s("%d", &x3);
    scanf_s("%d", &y3);
    ab = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2)); //расстояние между A и B
    ac = sqrt(pow(abs(x3 - x1), 2) + pow(abs(y3 - y1), 2)); //расстояние между A и C
    if (ab < ac) //ввод условия
    {
        printf("Ближе к точке A расположена точка B с расстоянием = %.2f\n", ab); //вывод на экран
    }
    else
    {
        if (ab == ac)
        {
            printf("Точки находятся на одинаковом расстоянии = %.2f\n", ab);
        }
        else
        printf("Ближе к точке A расположена точка C с расстоянием = %.2f\n", ac);
    }
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
