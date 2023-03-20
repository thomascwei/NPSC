#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char input[1000];
  scanf("%s",input);

  int start=0;
  int end = strlen(input)-1;
  char *result = "yes";
  while (start<end)
  {
    if (input[start] != input[end])
    {
      result="no";
      break;
    }
    start++;
    end--;
  }
  printf("%s\n", result);
  return 0;
}
