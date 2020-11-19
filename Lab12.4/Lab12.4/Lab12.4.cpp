// Lab12.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a; //ввод переменных
    printf("Введите число (100-999): ");//ввод с клавиатуры значения
    scanf_s("%d", &a);
    switch (a / 100) //первая цифра числа
    {
    case 1:
        printf("сто ");
        break;
    case 2:
        printf("двести ");
        break; 
    case 3:
        printf("триста ");
        break;
    case 4:
        printf("четыреста ");
        break;
    case 5:
        printf("пятьсот ");
        break;
    case 6:
        printf("шестьсот ");
        break;
    case 7:
        printf("семьсот ");
        break;
    case 8:
        printf("восемьсот ");
        break;
    case 9:
        printf("девятьсот ");
        break;
    default:
    {
        printf("\nНеправильный ввод.\n"); //если введено число лежит не в этих границах
        return 0;
    }
    }
    if (((a % 100) / 10) == 1) //если вторая цифра числа равна 1
    {
        switch (a % 100) //смотрим какие 2 последние цифры числа
        {
        case 10:
            printf("десять ");
            break;
        case 11:
            printf("одиннадцать ");
            break;
        case 12:
            printf("двенадцать ");
            break;
        case 13:
            printf("тринадцать ");
            break;
        case 14:
            printf("четырнадцать ");
            break;
        case 15:
            printf("пятнадцать ");
            break;
        case 16:
            printf("шестнадцать ");
            break;
        case 17:
            printf("семнадцать ");
            break;
        case 18:
            printf("восемнадцать ");
            break;
        case 19:
            printf("девятнадцать ");
            break;
        }
    }
    else 
    {
        switch ((a % 100) / 10) //вторая цифра числа, неравная 1
        {
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        case 5:
            printf("пятьдесят ");
            break;
        case 6:
            printf("шестьдесят ");
            break;
        case 7:
            printf("семьдесят ");
            break;
        case 8:
            printf("восемьдесят ");
            break;
        case 9:
            printf("девяносто ");
            break;
        }
        switch (a % 10) //последняя цифра числа
        {
        case 1:
            printf("один\n");
            break;
        case 2:
            printf("два\n");
            break;
        case 3:
            printf("три\n");
            break;
        case 4:
            printf("четыре\n");
            break;
        case 5:
            printf("пять\n");
            break;
        case 6:
            printf("шесть\n");
            break;
        case 7:
            printf("семь\n");
            break;
        case 8:
            printf("восемь\n");
            break;
        case 9:
            printf("девять\n");
            break;
        }
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
