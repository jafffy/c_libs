#include <threads.h>
#include <stdio.h>

int my_thrd_start(void* args)
{
  printf("Hello, from %d\n", thrd_current());

  return 0;
}

int main()
{
  thrd_t tid;

  thrd_create(&tid, my_thrd_start, NULL);

  int res;

  thrd_join(tid, &res);

  printf("%d\n", res);

  return 0;
}
