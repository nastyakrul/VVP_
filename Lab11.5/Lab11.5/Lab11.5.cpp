﻿// Lab11.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int x;//ввод переменных
    printf("Введите целое число: ");//ввод с клавиатуры значения
    scanf_s("%d", &x);
    if (x == 0) //нулевое число
    {
        printf("Нулевое число\n"); //вывод результата на экран
    }
    else
    {
        if (x > 0) //положительное число
        {
            if (x % 2 == 0) //четное
            {
                printf("Положительное четное число\n"); //вывод результата на экран
            }
            else
            {
                printf("Положительное нечетное число\n"); //вывод результата на экран
            }
        }
        else
        {
            if (x % 2 == 0) //если число отрицательное и четное
            {
                printf("Отрицательное четное число\n"); //вывод результата на экран
            }
            else
            {
                printf("Отрицательное нечетное число\n"); //вывод результата на экран
            }
        }
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