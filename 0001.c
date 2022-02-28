/**
 * Problem 1 - Multiples of 3 or 5
 *
 * If we list all the natural numbers below 10 that are multiples of
 * 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>
#include <assert.h>

/// Simple brute force method
int SumDivisibleBy3or5a(
  const int n) ///< [in] Cutoff at which to stop adding multiples of 3 and 5
{
  int sum = 0;
  for (int i = 1; i < n; i++)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  return sum;
}

/// Efficient method from project euler.net forum
int SumDivisibleBy3or5b(
  const int n) ///< [in] Cutoff at which to stop adding multiples of 3 and 5
{
  int sum = 0;
  for (int i = 3;  i < n; i += 3)  sum +=i;
  for (int i = 5;  i < n; i += 15) sum +=i;
  for (int i = 10; i < n; i += 15) sum +=i;
  return sum;
}

int main()
{
  assert(SumDivisibleBy3or5a(10) == 23);
  printf("SumDivisibleBy3or5a(1000) = %d\n", SumDivisibleBy3or5a(1000));
  assert(SumDivisibleBy3or5b(10) == 23);
  printf("SumDivisibleBy3or5b(1000) = %d\n", SumDivisibleBy3or5b(1000));
  return 0;
}
