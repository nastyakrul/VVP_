﻿// Lab4.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a;
    printf("Введите одно ненулевое число: ");
    scanf_s("%d", &a); //ввод с клавиатуры первого числа
    int b;
    printf("Введите другое ненулевое число: ");
    scanf_s("%d", &b); //ввод с клавиатуры второго числа
    a = pow(a, 2); //возведение в квадрат
    b = pow(b, 2);
    int sum,r,pr,del; //ввод переменных
    if (a != 0 && b != 0) //условие, числа должны быть ненулевые 
    {
        sum = a + b; //нахождение суммы
        r = a - b; //нахождение разности
        pr = a * b; //нахождение произведения
        del = a / b; //нахождение частного
        printf("Сумма квадратов этих чисел: %d\n", sum); //вывод получившихся значений на экран
        printf("Разность квадратов этих чисел: %d\n", r);
        printf("Произведение квадратов этих чисел: %d\n", pr);
        printf("Частное квадратов этих чисел: %d\n", del);
        system("pause");
    }
    else
    {
        printf("Введите ненулевые числа \n"); //если числа не соответствуют условию, то выводится сообщение
    }
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
