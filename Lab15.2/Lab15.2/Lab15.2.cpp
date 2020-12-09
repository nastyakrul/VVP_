﻿// Lab15.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int Sign(double x) //ввод функции
{
    if (x < 0) //ввод условия
        return -1; //возвращение какого-либо значения
    else
    {
        if (x == 0)
            return 0;
        else 
            return 1;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    double a, b;//ввод переменных
    int sum;
    printf("Введите A:"); //ввод с клавиатуры чисел
    scanf_s("%lf", &a);
    printf("Введите B:");
    scanf_s("%lf", &b);
    sum = Sign(a) + Sign(b); //вызов функции
    printf("Sign(A) + Sign(B) = %d\n", sum); //вывод на экран значения
    system("pause");
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
