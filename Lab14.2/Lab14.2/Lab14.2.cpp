﻿// Lab14.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a, b, i, j;//ввод переменных
    printf("Введите A: "); //ввод значения с клавиатуры
    scanf_s("%d", &a);
    printf("Введите B: "); //ввод значения с клавиатуры
    scanf_s("%d", &b);
    if ((a > b) && (a > 0) && (b > 0)) //ввод условия
    {
        while (a >= b) //ввод цикла
        {
            a = a - b; //уменьшаем число A на B
        }
        printf("Длина незанятой части отрезка A: %d\n", a); //вывод результата на экран
    }
    else
        printf("числа должны быть положительными и первое должно быть больше второго\n"); //подсказка
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