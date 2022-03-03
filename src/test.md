NAME
====

src/0001.c

SYNOPSIS
========

\

`#include <stdio.h>`\
`#include <assert.h>`\

Functions
---------

int **SumDivisibleBy3or5a** (const int n)\

int **SumDivisibleBy3or5b** (const int n)\

int **main** ()\

Detailed Description
====================

**Author**

> Andrew Tennenbaum

**Version**

> 1.0

Problem 1 - Multiples of 3 or 5

DESCRIPTION
===========

If we list all the natural numbers below 10 that are multiples of 3 or
5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Definition in file **0001.c**.

Function Documentation
======================

int main ()
-----------

Definition at line 45 of file 0001.c.

    46 {
    47     //Test simple brute force method
    48     assert(SumDivisibleBy3or5a(10) == 23);
    49     printf("SumDivisibleBy3or5a(1000) = %d, SumDivisibleBy3or5a(1000));
    50     //Test efficient method
    51     assert(SumDivisibleBy3or5b(10) == 23);
    52     printf("SumDivisibleBy3or5b(1000) = %d, SumDivisibleBy3or5b(1000));
    53     return 0;
    54 }

int SumDivisibleBy3or5a (const int n)
-------------------------------------

Simple brute force method

**Returns**

> a sum of all the multiples of 3 or 5 below

**Parameters**

> *n* \[in\] Cutoff at which to stop adding multiples of 3 and 5

Definition at line 23 of file 0001.c.

    25 {
    26     int sum = 0;
    27     for (int i = 1; i < n; i++)
    28         if (i % 3 == 0 || i % 5 == 0)
    29             sum += i;
    30     return sum;
    31 }

int SumDivisibleBy3or5b (const int n)
-------------------------------------

Efficient method

**Returns**

> The sum of all the multiples of 3 or 5 below n

**Parameters**

> *n* \[in\] Cutoff at which to stop adding multiples of 3 and 5

Definition at line 35 of file 0001.c.

    37 {
    38     int sum = 0;
    39     for (int i = 3;  i < n; i += 3)  sum +=i;
    40     for (int i = 5;  i < n; i += 15) sum +=i;
    41     for (int i = 10; i < n; i += 15) sum +=i;
    42     return sum; 
    43 }

Author
======

Generated automatically by Doxygen for ProjectEulerC from the source
code.
