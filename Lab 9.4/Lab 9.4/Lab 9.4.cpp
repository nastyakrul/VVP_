﻿// Lab 9.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a,b,c,k,s,s1; //ввод переменных
    printf("Введите A: ");//ввод с клавиатуры значения
    scanf_s("%d", &a);
    printf("Введите B: ");//ввод с клавиатуры значения
    scanf_s("%d", &b);
    printf("Введите C: ");//ввод с клавиатуры значения
    scanf_s("%d", &c);
    k = (a / c) * (b / c); //общее количество квадратов
    s = k * pow(c, 2); //площадь занятой части
    s1 = a * b - s; //площадь незанятой части
    printf("Количество квадратов в прямоугольнике: %d\n", k);//вывод результата на экран
    printf("Площадь незанятой части: %d\n", s1);//вывод результата на экран
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
