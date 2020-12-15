﻿// Lab17.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int n, arr[100], i, d; //ввод переменных
    printf("Введите N: "); //ввод значения с клавиатуры
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("a[%i] : ", i);
        scanf_s("%i", &arr[i]); //ввод знаений массива с клавиатуры
    }
    d = arr[2] - arr[1]; //разность
    for (i = 2; i <= n; i++)
    {
        if (d != arr[i] - arr[i - 1]) //если нет последовательности
            d  = 0;
    }
    if (d != 0) //условие вывода результата на экран
        printf("Элементы образую арифметическую прогрессию\nРазность прогрессии: %d\n", d); 
    else
        printf("Элементы не образую арифметическую прогрессию: %d\n", d);
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