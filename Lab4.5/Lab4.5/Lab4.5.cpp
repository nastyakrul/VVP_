﻿// Lab4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    printf("Введите одно число: ");
    scanf_s("%d", &a);
    int b;
    printf("Введите другое число: ");
    scanf_s("%d", &b);
    int m1 = abs(a);
    int m2 = abs(b);
    int sum,r,pr,del;
    sum = m1 + m2;
    r = m1 - m2;
    pr = m1 * m2;
    del = m1 / m2;
    printf("Сумма модулей этих чисел: %d\n", sum);
    printf("Разность модулей этих чисел: %d\n", r);
    printf("Произведение модулей этих чисел: %d\n", pr);
    printf("Частное модулей этих чисел: %d\n", del);
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
