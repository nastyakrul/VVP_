﻿// Lab13.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    double a, st, rez;
    int n, i;//ввод переменных
    printf("Введите вещественное число: "); //ввод значения с клавиатуры
    scanf_s("%lf", &a);
    printf("Введите целое число: "); //ввод значения с клавиатуры
    scanf_s("%d", &n);
    if (n > 0) // число должно быть положительным
    {
        rez = 1; //начальные значения
        st = 1;
        for (i = 1; i <= n; i++) //ввод цикла
        {
            st = st * ( - a); //расчет степени
            rez = rez + st; //вычисление результата
        }
        printf("Значение выражения = %.2f\n", rez); //вывод результата на экран
    }
    else
        printf("Второе число должно быть положительным\n"); //подсказка
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
