// функция для взятия факториала числа N 
int factorial(int n)
{
  if (n == 1) { return 1; }
  return n * factorial(n - 1);
}

// объяснение рекурсивной функции
factorial(5) = 5 * factorial(4)
                   factorial(4) = 4 * factorial(3)
                                      factorial(3) = 3 * factorial(2)
                                                         factorial(2) = 2 * factorial(1)
                                                                            factorial(1) = 1


// пример этой же функции, но без рекурсии
int factorialNoRecursive(int n)
{
  int result = 1;
  while (n != 1)
  {
    result *= n;
    n--;
  }
  return result;
}
