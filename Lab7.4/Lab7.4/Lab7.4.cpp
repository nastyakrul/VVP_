﻿// Lab7.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int x, y,s,t,r; //ввод переменных
    printf("Введите скорость первого автомобиля: ");//ввод с клавиатуры значения
    scanf_s("%d", &x);
    printf("Введите скорость второго автомобиля: ");//ввод с клавиатуры значения
    scanf_s("%d", &y);
    printf("Введите расстояние между ними: ");//ввод с клавиатуры значения
    scanf_s("%d", &s);
    printf("Введите время: ");//ввод с клавиатуры значения
    scanf_s("%d", &t);
    r = s + t * (x + y); //вычисление расстояния
    printf("Расстояние между ними через это время станет равным: %d\n", r); //вывод на экран значения
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
