#include <stdio.h>
#include <sys/resource.h>
int main (void)
{
  struct rlimit limit;

  getrlimit (RLIMIT_STACK, &limit);
  printf ("\nStack Limit = %ld and %ld max\n", limit.rlim_cur, limit.rlim_max);
}
