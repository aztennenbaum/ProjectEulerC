/*
 * Multiples of 3 or 5
 * 
 * Problem 1
 * 
 * If we list all the natural numbers below 10 that are multiples of
 * 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>
#include <assert.h>


int SumDivisibleBy3or5(
  const int below) ///<find the sum of all multipules of 3 and 5 below this number
{
  int sum = 0;
  for (int i = 1; i < below; i++)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  return sum;
}

int main()
{
  assert(SumDivisibleBy3or5(10) == 23);
  printf("SumDivisibleBy3or5(1000) = %d\n", SumDivisibleBy3or5(1000));
  return 0
}
