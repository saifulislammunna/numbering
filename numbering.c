#include <stdio.h>

int main()
{
  int n, m, i, j;

  scanf("%d",&m);

  for (j = 10; j <= m; j++) {
    if (j % 11 == 0 ){
      continue;
    }
    printf("%d\n", j);
  }
  return 0;

}

