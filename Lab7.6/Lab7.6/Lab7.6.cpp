﻿// Lab7.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    double a1,b1,c1,a2,b2,c2,a,x,y; //ввод переменных
    printf("Введите A1 = ");//ввод с клавиатуры значения
    scanf_s("%lf", &a1);
    printf("Введите B1 = ");//ввод с клавиатуры значения
    scanf_s("%lf", &b1);
    printf("Введите C1 = ");//ввод с клавиатуры значения
    scanf_s("%lf", &c1);
    printf("Введите A2 = ");//ввод с клавиатуры значения
    scanf_s("%lf", &a2);
    printf("Введите B2 = ");//ввод с клавиатуры значения
    scanf_s("%lf", &b2);
    printf("Введите C2 = ");//ввод с клавиатуры значения
    scanf_s("%lf", &c2); 
    a= a1 * b2 - a2 * b1; //ищем определитель системы
    x = (c1 * b2 - c2 * b1) / a;
    y = (a1 * c2 - a2 * c1) / a;
    printf("x= %.2f\n", x); //вывод на экран значения
    printf("y= %.2f\n", y); //вывод на экран значения
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
