﻿// Lab5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a,b,c,d1,d2,sum; //ввод переменных
    printf("Введите точку A:");
    scanf_s("%d", &a); //ввод с клавиатуры точки А
    printf("Введите точку B:");
    scanf_s("%d", &b); //ввод с клавиатуры точки В
    printf("Введите точку C:");
    scanf_s("%d", &c); //ввод с клавиатуры точки С
    d1 = a + c; //нахождение длины отрезка АС
    d2 = b + c; //нахождение длины отрезка ВС
    sum = d1 + d2; //нахождение их суммы 
    printf("Длина отрезка АС =%d\n", d1);//вывод результата на экран
    printf("Длина отрезка ВС =%d\n", d2);
    printf("Сумма этих отрезков =%d\n", sum);
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
