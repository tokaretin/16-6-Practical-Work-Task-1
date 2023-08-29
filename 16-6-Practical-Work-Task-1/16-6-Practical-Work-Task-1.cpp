﻿/*Задание 1. Спидометр
Что нужно сделать
Реализуйте цифровой спидометр автомобиля. Сама модель автомобиля, которую нужно будет воссоздать, 
весьма проста. 
- Начальная скорость — 0 км/ч. Пользователь вводит в стандартный ввод разницу (дельту) 
в скорости, и результирующая скорость показывается на спидометре в стандартный вывод. Так происходит
до той поры, пока машина снова не остановится, то есть пока скорость не станет меньше или равна нулю 
(сравнение должно происходить с дельтой в 0,01). Диапазон возможных значений скорости машины от 0 до 150 км/ч. 
Сам показатель спидометра вместе с единицами измерения требуется записывать в отдельную строку-буфер, которая 
потом и будет показываться на экране. Точность отображения скорости — до 0,1 км/ч.

Пример работы программы:

Speed delta:30
Speed: 30.0
Speed delta:20.2
Speed: 50.2
Speed delta:100
Speed: 150.0
Speed delta:-22.24
Speed: 127.8

Рекомендации
Используйте цикл do … while для организации постоянного опроса пользователя. Для отображения числа с нужной 
точностью воспользуйтесь функцией std::sprintf(speed_str, "%.1f", speed_value); где speed_str — строка, в 
которую функция sprintf «печатает» значение скорости (speed_value) с одним знаком после десятичной точки (%.1f). */


#define _CRT_SECURE_NO_WARNINGS // Подавление предупреждений о небезопасных функциях
#include <iostream>
#include <cstdio> 
 //почему-то не работает std::sprintf(speed_str, "%.1f", currentSpeed)
 //за-то работает так sprintf_s (speed_str, "%.1f", currentSpeed);  - здесь библиотеку не использую #include <cstdio> 

//int main()
//{
//    const double epsilon = 0.01; // дельта для сровнения с нулем
//    double currentSpeed = 0.0; // инициализация текущей скорости авто
//    char speed_str[10]; // создаем массив для хранения офтрматированной строки скорости
//
//    do
//    {
//        double speedDelta; // переменная для храненеия введенной скорости пользователем
//        std::cout << "Speed delta: "; // просим ввести скорость
//        std::cin >> speedDelta; // пользователь вводит скорость
//
//        currentSpeed += speedDelta;
//
//        // проверка спидометра
//        if (currentSpeed < 0)
//        {
//            currentSpeed = 0;
//        }
//        else if (currentSpeed > 150)
//        {
//            currentSpeed = 150;
//        }
//
//        // форматируем текущую скорсть в строку с одним знаком после десятичной точки
//        std::sprintf(speed_str, "%.1f", currentSpeed);
//
//        std::cout << "Speed: " << speed_str << std::endl; // отформатированная строка на экран
//
//    } while (currentSpeed > epsilon); // продолжаем цикл пока ткущая скорость больше заданной
//
//    return 0;
//}

int main()
{
    // из числа в строку
    int var = 521;
    double var_i = 123.15229;
    
    char res_d[10];
    char res_f[10];

    std::sprintf(res_d, "%.1d", var);
    std::sprintf(res_f, "%.2f", var_i);

    std::cout << res_d << std::endl;
    std::cout << res_f << std::endl;

    std::cout << std::endl;
    // из строки в число
    int a = std::atoi("156k2"); // консоль: только до буквы k 156
    long b = std::atol("1478965423"); // консоль: 1478965423
    long long c = std::atoll("10297613241231235125"); // консоль: 10297613241231235125
    double d = std::atof("124431.12414"); // консоль: 124431.12414

    std::printf("a = %d\nb = %ld\nc = %lld\nd = %.3f\n", a, b, c, d);
    // 
    //std::cout << std::endl;
    //std::cout << "a = " << a << '\n'
    //    << "b = " << b << '\n'
    //    << "c = " << c << '\n'
    //    << "d = " << d << '\n';
}


