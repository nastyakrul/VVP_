﻿// Lab19.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int n, a[100] = { 0 }, i, min, max, b, c; //ввод переменных
    printf("Введите N: "); //ввод значения с клавиатуры
    scanf_s("%d", &n);
    printf("Введите массив:\n");
    for (i = 1; i <= n; i++)
    {
        printf("a[%i] : ", i);
        scanf_s("%i", &a[i]); //ввод знаений массива с клавиатуры
    }
    min = a[1]; //присваиваем начальные значения
    max = a[1];
    for (i = 1; i <= n; i++)
    {
        if (a[i] < min) //поиск минимального
        {
            min = a[i];
            b = i;
        }
    }
    ++n;
    for (int i1 = n; i1 > b; --i1)
        a[i1] = a[i1 - 1];
    a[b] = 0;
    for (i = 1; i <= n; i++)
    {
        if (a[i] > max) //поиск максимального элемента
        {
            max = a[i];
            c = i;
        }
    }
    ++n;
    for (int i2 = n ; i2 > c+2; --i2) 
        a[i2] = a[i2 - 1];
    a[c+1] = 0;
    printf("Новый массив :\n");
    for (i = 1; i <= n; i++)
    {
        printf("a[%i] : %d\n", i, a[i]); //вывод массива на экран
    }
    system("pause");
    return 0;
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
