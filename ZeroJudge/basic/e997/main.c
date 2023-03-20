#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char input[1024];
  int index;

  // 讀取空白間隔字串
  scanf("%[^\n]", input);
  scanf("%d", &index);

  int students[51] = {0};

  int i = 0;
  int j = 1;
  while (i < strlen(input))
  {
    if (input[i] == ' ')
    {
      students[j] = i;
      j++;
    }
    i++;
  }
  students[j] = strlen(input);

  int start, end;
  start = students[j - index];
  end = students[j - index + 1];
  for (int i = start; i < end; i++)
  {
    printf("%c", input[i]);
  }
  printf("\n");
  return 0;
}
