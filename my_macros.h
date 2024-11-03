#ifndef MY_MACROS_H
#define MY_MACROS_H

#include <math.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y)) // Мінімум з двох чисел
#define MAX(x, y) ((x) > (y) ? (x) : (y)) // Максимум з двох чисел
#define ABS(x) ((x) < 0 ? -(x) : (x)) // Модуль числа
#define POW(x, n) (pow((x), (n))) // Піднесення до степеня

// Макроси для виведення результатів
#define PRINTI(w) printf(#w "=%d\n", w)
#define PRINTR(w) printf(#w "=%f\n", (float)w)

#endif // MY_MACROS_H
