﻿// Lab5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int x1,y1,x2,y2,a,b,p,s; //ввод переменных
    printf("Введите координату x1:");
    scanf_s("%d", &x1); //ввод с клавиатуры координат
    printf("Введите координату y1:");
    scanf_s("%d", &y1); //ввод с клавиатуры координат
    printf("Введите координату x2:");
    scanf_s("%d", &x2); //ввод с клавиатуры координат
    printf("Введите координату y2:");
    scanf_s("%d", &y2); //ввод с клавиатуры координат
    a = abs(x2 - x1);
    b = abs(y2 - y1);
    p = (a + b) * 2;
    s = a * b;
    printf("Периметр прямоугольника =%d\n", p);//вывод результата на экран
    printf("Площадь прямоугольника =%d\n", s);//вывод результата на экран
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