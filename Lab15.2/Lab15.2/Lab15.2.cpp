﻿// Lab15.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <math.h>

int Sign(double x)
{
    if (x < 0)
        return -1;
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
    printf("Введите A:");
    scanf_s("%lf", &a);
    printf("Введите B:");
    scanf_s("%lf", &b);
    sum = Sign(a) + Sign(b);
    printf("Sign(A) + Sign(B) = %d\n", sum);
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
