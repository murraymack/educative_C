int fib(int n)
{
  int i = 0;
  int last1, last2, out;
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else for (i = 0; i < n; i++) {
    if (i == 1) {
      last1 = 0;
      last2 = 1;
      out = last1 + last2;
    }
    if (i > 1) {
      last1 = last2;
      last2 = out;
      out = last1 + last2;
    }
  }
  printf("Fibb number is: %d\n", out);
  return out;
}