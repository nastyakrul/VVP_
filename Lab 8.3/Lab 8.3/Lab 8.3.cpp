﻿// Lab 8.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a, b, k, d; //ввод переменных
    printf("Введите A : ");//ввод с клавиатуры значения
    scanf_s("%d", &a);
    printf("Введите B : ");//ввод с клавиатуры значения
    scanf_s("%d", &b);
    if (a > b) //ввод условия
    {
        k = a / b; //сколько раз B отложится на отрезке A
        d = a - k * b; //подсчет незанятой длины
        printf("Длина незанятой части отрезка A = %.d\n",d); //вывод на экран значения
    }
    else
    printf("Недопустимые значения, число A должо быть больше числа B \n"); //неудовлетворенность условию
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
