#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int length;
  int input;
  int k3 = 0;
  int k31 = 0;
  int k32 = 0;

  scanf("%d", &length);
  
  for (int i = 0; i < length; i++)
  {
    scanf("%d", &input);
    int mod = input % 3;
    switch (mod)
    {
    case 0:
      k3++;
      break;

    case 1:
      k31++;
      break;
    case 2:
      k32++;
      break;
    }
  }
  

  printf("%d %d %d\n",k3,k31,k32);

  return 0;
}
