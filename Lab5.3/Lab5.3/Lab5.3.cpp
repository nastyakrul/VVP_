﻿// Lab5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a,b,c,d1,d2,pr; //ввод переменных
    printf("Введите 3 числа:");
    scanf_s("%d%d%d",&a,&b,&c); //ввод с клавиатуры координат
    if ((a < c && c < b) || (b < c && c < a)) //ввод условия, что С стоит между А и В
    {
        if (a < c < b) //ввод условия
        {
            d1 = c - a;
            d2 = b - c;
        }
        else
        {
            d1 = a - c ;
            d2 = c - b;
        }
        pr = d1 * d2; //нахождение произведения
        printf("Произведение длин отрезков =%d\n", pr);//вывод результата на экран
    }
    else
    {
        printf("Введите другое значение третьего числа "); //вывод на экран сообщения
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
