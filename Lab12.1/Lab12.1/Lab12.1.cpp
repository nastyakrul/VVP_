// Lab12.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int x,y,d,e;//ввод переменных
    printf("Введите номер дня (1-31): ");//ввод с клавиатуры значения
    scanf_s("%d", &x);
    printf("Введите номер месяца (1-12): ");//ввод с клавиатуры значения
    scanf_s("%d", &y);
    if (x < 10)
    {
        switch (x)
        {
        case 1:
            printf("первое");
            break;
        case 2:
            printf("второе");
            break;
        case 3:
            printf("третье");
            break;
        case 4:
            printf("четвертое");
            break;
        case 5:
            printf("пятое");
            break;
        case 6:
            printf("шестое");
            break;
        case 7:
            printf("седьмое");
            break;
        case 8:
            printf("восьмое");
            break;
        case 9:
            printf("девятое");
            break;
        default:
        {
            printf("Неправильный ввод.\n");
            return 0;
        }
        }
    }
    else
    {
        d = x / 10;
        e = x % 10;
        switch (d)
        {
        case 1:
            switch (e)
            {
            case 0:
                    printf("десятое");
                    break;
            case 1:
                printf("одиннадцатое");
                break;
            case 2:
                printf("двенадцатое");
                break;
            case 3:
                printf("тринадцатое");
                break;
            case 4:
                printf("четырнадцатое");
                break;
            case 5:
                printf("пятнадцатое");
                break;
            case 6:
                printf("шестнадцатое");
                break;
            case 7:
                printf("семнадцатое");
                break;
            case 8:
                printf("восемнадцатое");
                break;
            case 9:
                printf("девятнадцатое");
                break;
            default:
            {
                printf("Неправильный ввод.\n");
                return 0;
            }
            }
            break;
        case 2:
            if (e == 0)
                printf("двадцатое");
            else
            {
                printf("двадцать ");
                switch (e)
                {
                case 1:
                    printf("первое");
                    break;
                case 2:
                    printf("второе");
                    break;
                case 3:
                    printf("третье");
                    break;
                case 4:
                    printf("четвертое");
                    break;
                case 5:
                    printf("пятое");
                    break;
                case 6:
                    printf("шестое");
                    break;
                case 7:
                    printf("седьмое");
                    break;
                case 8:
                    printf("восьмое");
                    break;
                case 9:
                    printf("девятое");
                    break;
                }
            }
            break;
        case 3:
            if (e == 0)
                printf("тридцатое");
            else
            {
                printf("тридцать ");
                switch (e)
                {
                case 1:
                    printf("первое");
                    break;
                default:
                {
                    printf("Неправильный ввод.\n");
                    return 0;
                }
                }
            }
            break;
        default:
        {
            printf("Неправильный ввод.\n");
            return 0;
        }
        }
    }
    switch (y)
    {
    case 1:
        printf(" января\n");
        break;
    case 2:
        printf(" февраля\n");
        break;
    case 3:
        printf(" марта\n");
        break;
    case 4:
        printf(" апреля\n");
        break;
    case 5:
        printf(" мая\n");
        break;
    case 6:
        printf(" июня\n");
        break;
    case 7:
        printf(" июля\n");
        break;
    case 8:
        printf(" августа\n");
        break;
    case 9:
        printf(" сентября\n");
        break;
    case 10:
        printf(" октбяря\n");
        break;
    case 11:
        printf(" ноября\n");
        break;
    case 12:
        printf(" декабря\n");
        break;
    default:
    {
        printf("\nНеправильный ввод.\n");
        return 0;
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
