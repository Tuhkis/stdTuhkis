/*
------------------------
File: stdTuhkis.h
Author: Tuhkis

Documentation:
  Types:
    i8, i16, i32 and i64 are ints of different sizes.

    Str is just a char*

  Macros:
    arrLen(arr)
      gets the length of an array.

    randRange(a, b)
      Gets random number from between a and b.
      You should call srand(x) before using.

    isEven(a)
      checks if x is even.

------------------------
*/

#pragma once
#define STDTUHKIS_H

// Includes
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

// Types
typedef int_fast8_t  i8;
typedef int_fast16_t i16;
typedef int_fast32_t i32;
typedef int_fast64_t i64;

typedef char* Str;

// Macros
#define arrLen(arr) ((int)(sizeof(arr)/sizeof(arr[0])))

#define randRange(a, b) (rand() % (b - a + 1) + a)

#define isEven(a) !(n%2)

