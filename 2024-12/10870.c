#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
  if(n == 0 || n == 1)
    return n;
  return fib(n-1) + fib(n-2);
}

int main(int argc, char *argv[])
{
  int n;

  scanf("%d", &n);

  printf("%d\n", fib(n));

  return 0;
}