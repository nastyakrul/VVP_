﻿// Lab7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>
double pi = 3.14;

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    double a,gr; //ввод переменных
    printf("Введите значение угла: ");//ввод с клавиатуры значения
    scanf_s("%lf", &a);
    if ((0 < a) && (a < 2 * pi))//ввод условия
    {
        gr = 180 * a / pi; //вычисление
        printf("В градусах это: %.2f\n", gr); //вывод на экран значения
    }
    else 
    printf("Недопустимое значение угла\n"); //неудовлетворенность условию
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
