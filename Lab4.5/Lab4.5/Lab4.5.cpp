﻿// Lab4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a;
    printf("Введите одно ненулевое число: ");
    scanf_s("%d", &a); //ввод первого ненулевого числа с клавиатуры
    int b;
    printf("Введите другое ненулевое число: ");
    scanf_s("%d", &b); //ввод второго ненулевого числа с клавиатуры
    int m1 = abs(a); //модули этих чисел
    int m2 = abs(b);
    int sum,r,pr,del; //ввод переменных
    if (a != 0 && b != 0) //условие, числа должны быть ненулевые
    {
        sum = m1 + m2; //вычисление суммы
        r = m1 - m2; //вычисление разности
        pr = m1 * m2; //вычисление произведения
        del = m1 / m2; //вычисление частного
        printf("Сумма модулей этих чисел: %d\n", sum); //вывод на экран получившихся значений
        printf("Разность модулей этих чисел: %d\n", r);
        printf("Произведение модулей этих чисел: %d\n", pr);
        printf("Частное модулей этих чисел: %d\n", del);
    }
    else
    {
        printf("Введите ненулевые числа \n"); //если числа не соответствуют условию, то выводится сообщение
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
