﻿// Lab10.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a, b, c; //ввод переменных
    printf("Введите число a: ");//ввод с клавиатуры значения
    scanf_s("%d", &a);
    printf("Введите число b: ");//ввод с клавиатуры значения
    scanf_s("%d", &b);
    printf("Введите число c: ");//ввод с клавиатуры значения
    scanf_s("%d", &c);
    if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2)))
    {
        printf("Треугольник со сторонами a, b, c является прямоугольным \n");//вывод результата на экран
    }
    else
        printf("Треугольник со сторонами a, b, c не является прямоугольным\n");//противоречие условию
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
